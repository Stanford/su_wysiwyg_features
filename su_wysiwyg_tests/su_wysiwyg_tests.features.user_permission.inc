<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function su_wysiwyg_tests_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer masquerade
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'admin',
      '1' => 'contributor',
      '2' => 'editor',
    ),
  );

  // Exported permission: masquerade as admin
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(),
  );

  // Exported permission: masquerade as user
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      '0' => 'admin',
      '1' => 'contributor',
      '2' => 'editor',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'contributor',
      '2' => 'editor',
    ),
  );

  return $permissions;
}
