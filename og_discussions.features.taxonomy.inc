<?php
/**
 * @file
 * og_discussions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function og_discussions_taxonomy_default_vocabularies() {
  return array(
    'og_discussion_topic' => array(
      'name' => 'Group Discussion Topic',
      'machine_name' => 'og_discussion_topic',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
