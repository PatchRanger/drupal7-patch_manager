<?php
/**
 * @file
 * patch_manager_features.metaobject.inc
 */

/**
 * Implements hook_default_patch_manager_metaobject_type().
 */
function patch_manager_features_default_patch_manager_metaobject_type() {
  $items = array();
  $items['method'] = entity_import('patch_manager_metaobject_type', '{
    "label" : "Method",
    "type" : "method",
    "active" : "1",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['module'] = entity_import('patch_manager_metaobject_type', '{
    "label" : "Module",
    "type" : "module",
    "active" : "1",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
