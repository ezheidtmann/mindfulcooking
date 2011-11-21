<?php

class rep_report_pdf extends TCPDF {
  private $cluster_name, $cluster_director_name;
  private $column_spacing = 3;
  private $column_width;
  private $column_count = 2;

  private $printable_width;
  private $name_width, $phone_width, $email_width;

  private $line_padding = 2;
  private $line_height = NULL; // overrides font size if set

  private $school = array();
  private $members = array();

  function __construct() {
    // landscape, measurements in millimeters, letter size paper
    parent::__construct('L', 'mm', 'letter');
    
    $this->SetMargins(PDF_MARGIN_LEFT, 18, PDF_MARGIN_RIGHT);
    $this->SetHeaderMargin(PDF_MARGIN_HEADER);
    $this->SetFooterMargin(PDF_MARGIN_FOOTER);

    // set font to good default
    $this->setFont('helvetica');
    $this->setFontSize(8);

    $margins = $this->getMargins();
    $this->printable_width = $this->getPageWidth() - $margins['right'] - $margins['left'];
    $this->column_width = ($this->printable_width - $this->column_spacing) / $this->column_count;

    $this->email_width = $this->column_width * 0.4;
    $this->phone_width = 23;
    $this->name_width = $this->column_width - $this->email_width - $this->phone_width;
  }

  function newCluster($cluster, $director) {
    $this->cluster_name = $cluster;
    $this->cluster_director_name = $director;
    $this->addPage('L');
    $this->resetColumns();
    $this->setEqualColumns($this->column_count, $this->column_width);
  }

  function Header() {
    // TODO: set font, 
    $font = $this->getFont();

    $left_text = 'PAT Association Representatives';
    $center_text = $this->cluster_name .' HS Area Cluster';
    $right_text = 'Director: '. $this->cluster_director_name;

    $this->setFont('', 'B', 10);
    $x = $this->getX();
    $width = $this->printable_width;
    $this->Cell($width, $this->getFontSize(), $left_text, 0, 0, 'L', false, NULL, 0, false, 'T', 'T');
    $this->setX($x);
    $this->Cell($width, $this->getFontSize(), $center_text, 0, 0, 'C', false, NULL, 0, false, 'T', 'T');
    $this->setX($x);
    $this->Cell($width, $this->getFontSize(), $right_text, 0, 0, 'R', false, NULL, 0, false, 'T', 'T');
    $this->Ln($this->getFontSize());

    $this->addVerticalSpace();
    $this->setFont('', '', 9);
    $explain_text = "The first rep listed for each school is the head rep.";
    $this->Cell($width, $this->getFontSize(), $explain_text, 0, 0, 'C', false, NULL, 0, false, 'T', 'T');
    $this->Ln($this->getFontSize());
    //$this->setFontObj($font);
  }

  function Footer() {
    // TODO: add current date "data current as of"
    $page_num = 'Page '. $this->getAliasNumPage() .'/'. $this->getAliasNbPages();
    $this->Cell(0, 5, $page_num, 0, false, 'C', 0, '', 0, false, 'T', 'M');
  }

  function newSchool($school, $phone) {
    if (isset($this->school['name'])) {
      // print old school, ensuring it stays on one column, if possible
      $this->startTransaction();
      if ($this->printSchoolBlock(TRUE)) { // wrapped column or page 
        $this->rollbackTransaction(TRUE); // TRUE => modify self
        $this->startTransaction();
        $this->nextColumn(); // try the next column (this page or next)
        if ($this->printSchoolBlock(TRUE)) { // still wrapping!
          $this->rollbackTransaction(TRUE);
          $this->printSchoolBlock(); // print in original position
        }
        else {
          $this->commitTransaction(); // new column is good!
        }
      }
    }

    $this->school['name' ] = $school;
    $this->school['phone'] = $phone;
    $this->members = array();
  }

  function newMember($name, $phone, $email) {
    $this->members[] = array(
      'name' => $name,
      'phone' => $phone,
      'email' => $email,
    );
  }

  private function nextColumn() {
    if ($this->getColumn() == 1) {
      $this->addPage();
    } 
    else {
      $this->selectColumn(1);
    }
  }

  private function printSchoolBlock($abort_if_wrap = FALSE) {
    $col = $this->getColumn();
    $wrapped = FALSE;
    $this->addSchool($this->school['name'], $this->school['phone']);
    foreach ($this->members as &$member) {
      $this->addMember($member['name'], $member['phone'], $member['email']);
      if (!$wrapped && $col != $this->getColumn()) {
        $wrapped = TRUE;
        if ($abort_if_wrap) {
          return $wrapped;
        }
      }
    }
    return $wrapped;
  }

  // add the school glyphs to the PDF
  private function addSchool($school, $phone) {
    // TODO: set font, indentation

    $old_font = $this->getFont();

    $this->setFont('helvetica', 'BI');
    $this->setFontSize(10);


    $this->line_height = $this->getFontSize();
    $this->addLineFragment($school, $this->column_width - $this->phone_width);
    $new_font = $this->getFont();
    $this->setFontObj($old_font);
    $this->addLine($phone);
    $this->addVerticalSpace(1);
    $this->Line($this->getX(), $this->getY(), $this->getX() + $this->column_width, $this->getY());
    $this->addVerticalSpace();

    $this->line_height = NULL;
    // TODO: how to enforce rendering boxes?

  }

  // Add member glyphs to PDF
  private function addMember($name, $phone, $email) {
    $this->addLineFragment($name, $this->name_width);
    $this->addLineFragment($phone, $this->phone_width);
    $this->addLine($email, $this->email_width);
    $this->addVerticalSpace();
  }

  private function addLine($text, $max_width = NULL) {
    $this->addLineFragment($text, $max_width, TRUE);
  }

  private function addLineFragment($text, $max_width = NULL, $linebreak = FALSE) {
    if (is_null($max_width)) {
      // TODO: get distance from current point to margin
      $max_width = $this->getPageWidth();
    }

    // Document parameters for Cell
    $height = isset($this->line_height) ? $this->line_height : $this->getFontSize();
    $this->Cell($max_width, $height, $text,
      0, // border
      $linebreak ? 1 : 0, // line break 
      'L', // left align (L, C, R, J)
      false, // leave background transparent (don't paint)
      NULL, // link identifier
      3, // compress character spacing if text is too big
      false, // respect minimum height
      'T', // align cell top at current Y value
      'B'); // vertical alignment within cell: bottom
  }

  private function addVerticalSpace($y = NULL) {
    if (is_null($y)) {
      $y = $this->line_padding;
    }
    $this->setY($this->getY() + $y);
  }

  private function getFont() {
    $font = new stdClass;
    $font->family = $this->getFontFamily();
    $font->style = $this->getFontStyle();
    $font->size_pt = $this->getFontSizePt();
    return $font;
  }

  private function setFontObj($font) {
    $this->setFont($font->family, $font->style, $font->size_pt);
  }
}
