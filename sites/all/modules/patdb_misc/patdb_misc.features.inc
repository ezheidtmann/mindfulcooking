<?php
/**
 * @file
 * patdb_misc.features.inc
 */

/**
 * Implements hook_node_info().
 */
function patdb_misc_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Simple page with no window dressing'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
