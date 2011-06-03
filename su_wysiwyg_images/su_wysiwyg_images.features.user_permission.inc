<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function su_wysiwyg_images_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer imce(execute PHP)
  $permissions['administer imce(execute PHP)'] = array(
    'name' => 'administer imce(execute PHP)',
    'roles' => array(),
  );

  // Exported permission: view imagecache su_large
  $permissions['view imagecache su_large'] = array(
    'name' => 'view imagecache su_large',
    'roles' => array(),
  );

  // Exported permission: view imagecache su_medium
  $permissions['view imagecache su_medium'] = array(
    'name' => 'view imagecache su_medium',
    'roles' => array(),
  );

  // Exported permission: view imagecache su_small
  $permissions['view imagecache su_small'] = array(
    'name' => 'view imagecache su_small',
    'roles' => array(),
  );

  // Exported permission: view imagecache su_square_thumbnail_large
  $permissions['view imagecache su_square_thumbnail_large'] = array(
    'name' => 'view imagecache su_square_thumbnail_large',
    'roles' => array(),
  );

  // Exported permission: view imagecache su_square_thumbnail_medium
  $permissions['view imagecache su_square_thumbnail_medium'] = array(
    'name' => 'view imagecache su_square_thumbnail_medium',
    'roles' => array(),
  );

  return $permissions;
}
