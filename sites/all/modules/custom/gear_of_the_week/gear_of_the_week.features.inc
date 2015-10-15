<?php
/**
 * @file
 * gear_of_the_week.features.inc
 */

/**
 * Implements hook_node_info().
 */
function gear_of_the_week_node_info() {
  $items = array(
    'gear_of_the_week' => array(
      'name' => t('Gear of the Week'),
      'base' => 'node_content',
      'description' => t('add gear to be sold this week.'),
      'has_title' => '1',
      'title_label' => t('Name of gear'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
