<?php

/**
 * Implementation of hook_user_default_roles().
 */
function contributor_wysiwyg_user_default_roles() {
  $roles = array();

  // Exported role: contributor
  $roles['contributor'] = array(
    'name' => 'contributor',
  );

  return $roles;
}
