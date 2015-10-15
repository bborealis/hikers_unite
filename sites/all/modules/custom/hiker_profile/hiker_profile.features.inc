<?php
/**
 * @file
 * hiker_profile.features.inc
 */

/**
 * Implements hook_node_info().
 */
function hiker_profile_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => t('Create a VIP profile'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
