<?php
/**
 * @file
 * og_discussions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function og_discussions_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function og_discussions_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function og_discussions_node_info() {
  $items = array(
    'og_discussion' => array(
      'name' => t('OG Discussion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
