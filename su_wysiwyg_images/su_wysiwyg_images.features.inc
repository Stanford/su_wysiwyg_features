<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function su_wysiwyg_images_imagecache_default_presets() {
  $items = array(
    'su_large' => array(
      'presetname' => 'su_large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '800',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'su_medium' => array(
      'presetname' => 'su_medium',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '500',
            'height' => '600',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'su_small' => array(
      'presetname' => 'su_small',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '300',
            'height' => '400',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'su_square_thumbnail_large' => array(
      'presetname' => 'su_square_thumbnail_large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '300',
            'height' => '300',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '200',
            'height' => '200',
            'xoffset' => 'center',
            'yoffset' => '40%',
          ),
        ),
      ),
    ),
    'su_square_thumbnail_medium' => array(
      'presetname' => 'su_square_thumbnail_medium',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '150',
            'height' => '150',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '80',
            'height' => '80',
            'xoffset' => 'center',
            'yoffset' => '40%',
          ),
        ),
      ),
    ),
  );
  return $items;
}
