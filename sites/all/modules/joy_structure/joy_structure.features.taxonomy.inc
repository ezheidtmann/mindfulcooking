<?php
/**
 * @file
 * joy_structure.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function joy_structure_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_1' => array(
      'name' => 'Major Ingredients',
      'machine_name' => 'vocabulary_1',
      'description' => 'Include all major ingredients used in this recipe. People can search for recipes based on these ingredients.',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-8',
    ),
    'vocabulary_2' => array(
      'name' => 'Seasons',
      'machine_name' => 'vocabulary_2',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
    ),
    'vocabulary_3' => array(
      'name' => 'Dish Type',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-10',
    ),
  );
}
