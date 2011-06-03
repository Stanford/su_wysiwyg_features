<?php

/**
 * Implementation of hook_input_formats().
 */
function su_contributor_wysiwyg_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'text editor';
  $input_format->roles = array(
    3 => 'admin',
    5 => 'contributor',
    4 => 'editor',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      // Maximum link text length
      'filter_url_length' => '72',
    ),
    // Settings for: image_resize_filter module
    'image_resize_filter' => array(
      // Resize images stored
      'image_resize_filter_image_locations' => array(
          'local' => 'local',
          'remote' => 0,
        ),
      // If resized, add a link to the original image.
      'image_resize_filter_link' => 0,
      // Optionally, give it the class
      'image_resize_filter_link_class' => '',
      // and/or a rel attribute
      'image_resize_filter_link_rel' => '',
    ),
    // Settings for: wysiwyg_filter module
    'wysiwyg_filter' => array(
      // HTML elements and attributes
      'wysiwyg_filter_valid_elements_raw' => '@[class|style|title],
a[href|target<_blank|name|rel], 
-div[align<center?justify?left?right],
#p[align<center?justify?left?right],
strong/b,em/i,u,
-ol[type|compact],-ul[type|compact],-li,-dl,-dt,-dd,
caption,-h2,-h3,-h4,-h5,-h6,hr[size|noshade],
br,cite,code,-blockquote,
img[src|width|height|align|hspace|vspace], 
-span[align<center?justify?left?right]',
      // HTML comments
      'wysiwyg_filter_allow_comments' => '0',
      // Color and background properties
      'wysiwyg_filter_styles_color' => array(
          'color' => 0,
          'background' => 0,
          'background-color' => 0,
          'background-image' => 0,
          'background-repeat' => 0,
          'background-attachment' => 0,
          'background-position' => 0,
        ),
      // Font properties
      'wysiwyg_filter_styles_font' => array(
          'font-style' => 'font-style',
          'font-weight' => 'font-weight',
          'font' => 0,
          'font-family' => 0,
          'font-size' => 0,
          'font-size-adjust' => 0,
          'font-stretch' => 0,
          'font-variant' => 0,
        ),
      // Text properties
      'wysiwyg_filter_styles_text' => array(
          'text-align' => 'text-align',
          'text-decoration' => 'text-decoration',
          'text-indent' => 0,
          'text-transform' => 0,
          'letter-spacing' => 0,
          'word-spacing' => 0,
          'white-space' => 0,
          'direction' => 0,
          'unicode-bidi' => 0,
        ),
      // Box properties
      'wysiwyg_filter_styles_box' => array(
          'margin' => 'margin',
          'margin-top' => 'margin-top',
          'margin-right' => 'margin-right',
          'margin-bottom' => 'margin-bottom',
          'margin-left' => 'margin-left',
          'padding' => 'padding',
          'padding-top' => 'padding-top',
          'padding-right' => 'padding-right',
          'padding-bottom' => 'padding-bottom',
          'padding-left' => 'padding-left',
        ),
      // Border properties (1)
      'wysiwyg_filter_styles_border-1' => array(
          'border' => 'border',
          'border-top' => 'border-top',
          'border-bottom' => 'border-bottom',
          'border-right' => 0,
          'border-left' => 0,
          'border-width' => 0,
          'border-top-width' => 0,
          'border-right-width' => 0,
          'border-bottom-width' => 0,
          'border-left-width' => 0,
        ),
      // Border properties (2)
      'wysiwyg_filter_styles_border-2' => array(
          'border-color' => 'border-color',
          'border-style' => 'border-style',
          'border-top-color' => 0,
          'border-right-color' => 0,
          'border-bottom-color' => 0,
          'border-left-color' => 0,
          'border-top-style' => 0,
          'border-right-style' => 0,
          'border-bottom-style' => 0,
          'border-left-style' => 0,
        ),
      // Dimension properties
      'wysiwyg_filter_styles_dimension' => array(
          'height' => 0,
          'line-height' => 0,
          'max-height' => 0,
          'max-width' => 0,
          'min-height' => 0,
          'min-width' => 0,
          'width' => 0,
        ),
      // Positioning properties
      'wysiwyg_filter_styles_positioning' => array(
          'bottom' => 'bottom',
          'left' => 'left',
          'right' => 'right',
          'top' => 'top',
          'clip' => 0,
          'overflow' => 0,
          'vertical-align' => 0,
          'z-index' => 0,
        ),
      // Layout properties
      'wysiwyg_filter_styles_layout' => array(
          'clear' => 0,
          'display' => 0,
          'float' => 0,
          'position' => 0,
          'visibility' => 0,
        ),
      // List properties
      'wysiwyg_filter_styles_list' => array(
          'list-style' => 'list-style',
          'list-style-type' => 'list-style-type',
          'list-style-image' => 0,
          'list-style-position' => 0,
        ),
      // Table properties
      'wysiwyg_filter_styles_table' => array(
          'border-collapse' => 0,
          'border-spacing' => 0,
          'caption-side' => 0,
          'empty-cells' => 0,
          'table-layout' => 0,
        ),
      // User interface properties
      'wysiwyg_filter_styles_user' => array(
          'cursor' => 0,
          'outline' => 0,
          'outline-width' => 0,
          'outline-style' => 0,
          'outline-color' => 0,
          'zoom' => 0,
        ),
      // Rules for Class Names
      'wysiwyg_filter_valid_classes' => array(
          0 => 'node-section',
          2 => 'node-subsection',
          4 => 'img-right',
          6 => 'img-left',
          8 => 'clear-block',
        ),
      // Rules for Element IDs
      'wysiwyg_filter_valid_ids' => array(),
      // Rules for URLs used within inline styles
      'wysiwyg_filter_style_urls' => array(
          0 => '/*',
        ),
      // Policy
      'wysiwyg_filter_nofollow_policy' => 'whitelist',
      // Domains list
      'wysiwyg_filter_nofollow_domains' => array(
          0 => 'stanford\\.edu',
        ),
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      // Delta => Weight for: URL filter
      '2' => '-9',
      // Delta => Weight for: HTML corrector
      '3' => '-5',
    ),
    'image_resize_filter' => array(
      // Delta => Weight for: Image resize filter
      '0' => '1',
    ),
    'wysiwyg_filter' => array(
      // Delta => Weight for: WYSIWYG Filter
      '0' => '10',
    ),
  );
  $input_format->machine = 'su_contributor_wysiwyg';
  $input_formats['su_contributor_wysiwyg'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'Filtered HTML';
  $input_format->roles = array(
    1 => 'anonymous user',
    2 => 'authenticated user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
    // Settings for: filter module
    'filter' => array(
      'filter_html' => '1',
      'allowed_html' => '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <h2> <h3> <h4> <h5> <h6>',
      'filter_html_help' => 1,
      'filter_html_nofollow' => 0,
    ),
  );
  $input_format->filters = array(
    'filter' => array(
      '2' => '0',
      '0' => '1',
      '1' => '2',
      '3' => '10',
    ),
  );
  $input_format->machine = 'filtered_html';
  $input_formats['filtered_html'] = $input_format;

  return $input_formats;

}
