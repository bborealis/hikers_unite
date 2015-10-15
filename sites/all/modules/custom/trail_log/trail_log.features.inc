<?php
/**
 * @file
 * trail_log.features.inc
 */

/**
 * Implements hook_node_info().
 */
function trail_log_node_info() {
  $items = array(
    'trail_log' => array(
      'name' => t('Trail Log'),
      'base' => 'node_content',
      'description' => t('A list of current trail conditions and reviews'),
      'has_title' => '1',
      'title_label' => t('Trail Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
