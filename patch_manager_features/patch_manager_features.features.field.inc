<?php
/**
 * @file
 * patch_manager_features.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function patch_manager_features_field_default_fields() {
  $fields = array();

  // Exported field: 'patch_manager_metaobject-method-field_method_code'.
  $fields['patch_manager_metaobject-method-field_method_code'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_method_code',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'method',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'patch_manager_metaobject',
      'field_name' => 'field_method_code',
      'label' => 'Method code',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'patch_manager_metaobject-method-field_method_machine_name'.
  $fields['patch_manager_metaobject-method-field_method_machine_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_method_machine_name',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'machine_name',
      'settings' => array(
        'max_length' => 128,
        'replace' => '_',
        'replace_pattern' => '[^a-z0-9_]+',
      ),
      'translatable' => '0',
      'type' => 'machine_name',
    ),
    'field_instance' => array(
      'bundle' => 'method',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'machine_name',
          'settings' => array(),
          'type' => 'machine_name_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'patch_manager_metaobject',
      'field_name' => 'field_method_machine_name',
      'label' => 'Method machine name',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'machine_name',
        'settings' => array(
          'size' => 128,
        ),
        'type' => 'machine_name_default',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'patch_manager_metaobject-module-field_module_machine_name'.
  $fields['patch_manager_metaobject-module-field_module_machine_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_module_machine_name',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'machine_name',
      'settings' => array(
        'max_length' => 128,
        'replace' => '_',
        'replace_pattern' => '[^a-z0-9_]+',
      ),
      'translatable' => '0',
      'type' => 'machine_name',
    ),
    'field_instance' => array(
      'bundle' => 'module',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'machine_name',
          'settings' => array(),
          'type' => 'machine_name_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'patch_manager_metaobject',
      'field_name' => 'field_module_machine_name',
      'label' => 'Module machine name',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'machine_name',
        'settings' => array(
          'size' => 128,
        ),
        'type' => 'machine_name_default',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'patch_manager_metaobject-module-field_module_methods'.
  $fields['patch_manager_metaobject-module-field_module_methods'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_module_methods',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'method' => 'method',
          ),
        ),
        'target_type' => 'patch_manager_metaobject',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'module',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'patch_manager_metaobject',
      'field_name' => 'field_module_methods',
      'label' => 'Module methods',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Method code');
  t('Method machine name');
  t('Module machine name');
  t('Module methods');

  return $fields;
}
