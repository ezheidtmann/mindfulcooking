<?php

function _patdb_node_reports() {
  return (object) array(
    'uid' => '1',
    'title' => 'Available Reports',
    'type' => 'page',
    'language' => LANGUAGE_NONE,
    'body' => array(LANGUAGE_NONE => array(0 => array('value' =>
'<h2>All Reps by Cluster</h2>

This is the report used as a sign-in sheet at meetings.

<ul>
 <li><a href="reports/all-reps-by-cluster.pdf">All Reps by Cluster</a></li>
</ul>

This report includes all building reps and head reps who have a valid
school with valid cluster.

<h2>Mail to School</h2>

These two reports print mailing labels for mail to be sent to members\' schools. Please be patient when clicking each link; the output is generated dynamically.

<ul>
<li><a href="reports/mail-to-school/all-reps.pdf">All Building Reps (PONY)</a>: School / Full Name / PPS Mail Destination</li>
<li><a href="reports/mail-to-school/head-reps.pdf">All Head Reps (PONY)</a>: School / Full Name / Building Count</li>
</ul>

Both lists exclude members from virtual schools (except when they have a PPS mail destination listed), but include even those members who prefer that mail be sent to their home address.

<h2>Mail to Home</h2>

These reports print mailing labels for mail to be sent to members\' home addresses. Each label contains the member\'s full name and home street address. Please be patient when clicking each link; the output is generated dynamically.

<ul>
<li><a href="reports/mail-to-home/all-preferring-home.pdf">Building reps who prefer home mail</a><br />
TODO: Add virtual schools / mail-home schools</li>
<li><a href="reports/mail-to-home/all-es.pdf">Building reps at elementary schools</a></li>
<li><a href="reports/mail-to-home/executive-board.pdf">Executive Board</a></li>
<li><a href="reports/mail-to-home/bargaining-committee.pdf">Bargaining Committee</a> (members and chair)</li>
</ul>
',
      'format' => 'plain_text',
    ))),
  );
}
