<?php
/**
 * @file
 * patdb_structure.features.inc
 */

/**
 * Implements hook_node_info().
 */
function patdb_structure_node_info() {
  $items = array(
    'cluster' => array(
      'name' => t('Cluster'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'member' => array(
      'name' => t('Member'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Member'),
      'help' => '',
    ),
    'school' => array(
      'name' => t('School'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('School Name'),
      'help' => '',
    ),
  );
  return $items;
}
