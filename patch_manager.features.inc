<?php

/**
 * @file
 * Provides Features integration for the Patch Manager module, based upon the features
 * integration provided by the Entity API.
 */

class MetaobjectFeaturesController extends EntityDefaultFeaturesController {
  /**
   * Defines the result for hook_features_api().
   */
  public function api() {
    $info = parent::api();
    $info['patch_manager_metaobject']['default_file'] = FEATURES_DEFAULTS_CUSTOM;
    $info['patch_manager_metaobject']['default_filename'] = 'metaobject';
    return $info;
  }
}

class MetaobjectTypeFeaturesController extends EntityDefaultFeaturesController {
  /**
   * Defines the result for hook_features_api().
   */
  public function api() {
    $info = parent::api();
    $info['patch_manager_metaobject_type']['default_file'] = FEATURES_DEFAULTS_CUSTOM;
    $info['patch_manager_metaobject_type']['default_filename'] = 'metaobject';
    return $info;
  }
}
