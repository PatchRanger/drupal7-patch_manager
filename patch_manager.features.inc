<?php

/**
 * @file
 * Provides Features integration for the Patch Manager module, based upon the features
 * integration provided by the Entity API.
 */


/**
 * Controller handling the Features integration.
 */
class PatchManagerFeaturesController extends EntityDefaultFeaturesController {

  /**
   * Defines the result for hook_features_api().
   */
  public function api() {
    $info = parent::api();
    $info['patch_manager_application']['default_file'] = FEATURES_DEFAULTS_CUSTOM;
    $info['patch_manager_application']['default_filename'] = 'application';
    return $info;
  }

  /**
   * Generates the result for hook_features_export().
   * Overridden to add in rules specific stuff.
   */
  public function export($data, &$export, $module_name = '') {
    $pipe = parent::export($data, $export, $module_name);
    /* @todo Implement real logic of export.
    foreach (entity_load_multiple_by_name($this->type, $data) as $name => $rules_config) {
      // Add in the dependencies.
      $export['dependencies'] += drupal_map_assoc($rules_config->dependencies());
      // Add in plugin / element specific additions.
      $iterator = new RecursiveIteratorIterator($rules_config, RecursiveIteratorIterator::SELF_FIRST);
      foreach ($iterator as $element) {
        if ($element->facesAs('RulesPluginFeaturesIntegrationInterace')) {
          // Directly use __call() so we cann pass $export by reference.
          $element->__call('features_export', array(&$export, &$pipe, $module_name));
        }
      }
    }
     *
     */
    return $pipe;
  }
}
