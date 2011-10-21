<?php
/**
 * @file
 * patdb_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function patdb_types_taxonomy_default_vocabularies() {
  return array(
    'committees' => array(
      'name' => 'Committees',
      'machine_name' => 'committees',
      'description' => 'Committees that members may chair or join',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'roles' => array(
      'name' => 'Roles',
      'machine_name' => 'roles',
      'description' => 'Jobs, duties, and roles that members may take',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
