<?php
/**
 * @file
 * patdb_misc.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function patdb_misc_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:members/by-school
  $menu_links['main-menu:members/by-school'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'members/by-school',
    'router_path' => 'members/by-school',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:schools-by-cluster
  $menu_links['main-menu:schools-by-cluster'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schools-by-cluster',
    'router_path' => 'schools-by-cluster',
    'link_title' => 'Schools',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Members');
  t('Schools');


  return $menu_links;
}
