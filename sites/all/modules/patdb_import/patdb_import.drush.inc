<?php

/**
 * Implements hook_drush_help()
 */
function patdb_import_drush_help($command) {
  switch ($command) {
    case 'drush:import-pat-mdb':
      return dt('Import PAT database from .mdb file');
  }
}

/**
 * Implements hook_drush_command()
 */
function patdb_import_drush_command() {
  $items = array();
  $items['import-pat-mdb'] = array(
    'description' => dt('Import PAT database from .mdb file'),
    'arguments'   => array(
      'filename' => dt('Access database file (required)'),
    ),
    'examples' => array(
      'Standard example' => 'drush import-pat-mdb pat.mdb',
    ),
    'aliases' => array('ipm'),
  );
  return $items;
}


/**
 * Callback for drush import-pat-mdb
 */
function drush_patdb_import_import_pat_mdb($filename = NULL) {
  if ($filename === NULL) {
    return drush_set_error('PATDB_IMPORT_NO_FILE', dt('You must specify an MDB file to import'));
  }
  if (!file_exists($filename)) {
    return drush_set_error('PATDB_IMPORT_INVALID_FILE', dt('!file does not exist', array('!file' => $filename)));
  }

  if (drush_confirm('Delete all school, cluster, member nodes first?')) {
    $nids =
      db_select('node', 'n')
      ->condition('n.type', array('school', 'cluster', 'member'), 'IN')
      ->fields('n', array('nid'))
      ->execute()
      ->fetchCol();

     node_delete_multiple($nids);
  }
  _patdb_import_mdb($filename);
}


