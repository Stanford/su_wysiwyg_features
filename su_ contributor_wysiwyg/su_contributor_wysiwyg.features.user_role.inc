<?php

/**
 * Implementation of hook_user_default_roles().
 */
function su_contributor_wysiwyg_user_default_roles() {
  $roles = array();

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
  );

  // Exported role: contributor
  $roles['contributor'] = array(
    'name' => 'contributor',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  return $roles;
}
