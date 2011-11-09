<?php
/**
 * @file
 * joy_structure.features.inc
 */

/**
 * Implements hook_node_info().
 */
function joy_structure_node_info() {
  $items = array(
    'fact' => array(
      'name' => t('Fact or quote'),
      'base' => 'node_content',
      'description' => t('Facts or quotes are selected at random to be displayed on the About page, and possibly other locations.'),
      'has_title' => '1',
      'title_label' => t('Fact or quote'),
      'help' => '',
    ),
    'srecipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('A simple recipe content type. Ingredients are entered free-form in a textarea.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Here is the place to share your favorite home-tested, plant-based recipes.<br />
Please tell the name of the original source, if known, and let us know if you have tweaked it (no need to tell just how).<br /><br />

Please provide a short description or pep talk to get the reader interested, but <b>DO NOT</b> repeat the words of the original author.  Your own words are best, but if you find you are tongue-tied, just leave that box blank and we will come up with something. <br /><br />

A photo really sparks interest.  Feel free to upload a photo of your dish if you have one.<br /><br />

Your recipe may be edited for form and clarity. Thank you!'),
    ),
  );
  return $items;
}
