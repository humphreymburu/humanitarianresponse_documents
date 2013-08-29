<?php
/**
 * @file
 * humanitarianresponse_documents.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_documents_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer field collections.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: create document content.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own document content.
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own document content.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
