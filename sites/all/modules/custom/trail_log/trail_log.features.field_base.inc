<?php
/**
 * @file
 * trail_log.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function trail_log_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_rating'.
  $field_bases['field_rating'] = array(
    'active' => 1,
    'cardinality' => 4,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rating',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '*' => '*',
        '**' => '**',
        '***' => '***',
        '****' => '****',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_status'.
  $field_bases['field_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Great' => 'Great',
        'OK conditions' => 'OK conditions',
        'Poor conditions' => 'Poor conditions',
        'closed' => 'closed',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
