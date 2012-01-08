<?php

function patdb_theme_process_page(&$variables) {
  $variables['site_slogan'] .=
    "Building Count: " . variable_get('patdb_total_building_count', 'Unknown');
  $variables['hide_site_slogan'] = FALSE;
}

function patdb_theme_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($node->revision_timestamp != $node->created) {
    $variables['revision_date'] = format_date($node->revision_timestamp);
    $revision_user = user_load($node->revision_uid);
    $variables['revision_name'] = theme('username', array('account' => $revision_user));
    $variables['updated'] = t('Last updated by !username on !datetime', array('!username' => $variables['revision_name'], '!datetime' => $variables['revision_date']));
  }
  else {
    $variables['updated'] = t('No updates since creation.');
  }
}
