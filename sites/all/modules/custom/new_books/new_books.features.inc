<?php
/**
 * @file
 * new_books.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function new_books_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function new_books_node_info() {
  $items = array(
    'new_books' => array(
      'name' => t('New Books'),
      'base' => 'node_content',
      'description' => t('New book info'),
      'has_title' => '1',
      'title_label' => t('New Books'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
