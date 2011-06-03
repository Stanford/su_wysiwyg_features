<?php

/**
 * Implementation of hook_strongarm().
 */
function su_contributor_wysiwyg_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'allowed_html_3';
  $strongarm->value = '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <p> <br> <h3> <h4> <h5>';

  $export['allowed_html_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_3';
  $strongarm->value = '1';

  $export['filter_html_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_help_3';
  $strongarm->value = 1;

  $export['filter_html_help_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_nofollow_3';
  $strongarm->value = 0;

  $export['filter_html_nofollow_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_1';
  $strongarm->value = '72';

  $export['filter_url_length_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_url_length_3';
  $strongarm->value = '72';

  $export['filter_url_length_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_allow_comments_3';
  $strongarm->value = '0';

  $export['wysiwyg_filter_allow_comments_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_nofollow_domains_3';
  $strongarm->value = array(
    0 => 'stanford\\.edu',
  );

  $export['wysiwyg_filter_nofollow_domains_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_nofollow_policy_3';
  $strongarm->value = 'whitelist';

  $export['wysiwyg_filter_nofollow_policy_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_style_urls_3';
  $strongarm->value = array(
    0 => '/*',
  );

  $export['wysiwyg_filter_style_urls_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_border-1_3';
  $strongarm->value = array(
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
  );

  $export['wysiwyg_filter_styles_border-1_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_border-2_3';
  $strongarm->value = array(
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
  );

  $export['wysiwyg_filter_styles_border-2_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_box_3';
  $strongarm->value = array(
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
  );

  $export['wysiwyg_filter_styles_box_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_color_3';
  $strongarm->value = array(
    'color' => 0,
    'background' => 0,
    'background-color' => 0,
    'background-image' => 0,
    'background-repeat' => 0,
    'background-attachment' => 0,
    'background-position' => 0,
  );

  $export['wysiwyg_filter_styles_color_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_dimension_3';
  $strongarm->value = array(
    'height' => 0,
    'line-height' => 0,
    'max-height' => 0,
    'max-width' => 0,
    'min-height' => 0,
    'min-width' => 0,
    'width' => 0,
  );

  $export['wysiwyg_filter_styles_dimension_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_font_3';
  $strongarm->value = array(
    'font-style' => 'font-style',
    'font-weight' => 'font-weight',
    'font' => 0,
    'font-family' => 0,
    'font-size' => 0,
    'font-size-adjust' => 0,
    'font-stretch' => 0,
    'font-variant' => 0,
  );

  $export['wysiwyg_filter_styles_font_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_layout_3';
  $strongarm->value = array(
    'clear' => 0,
    'display' => 0,
    'float' => 0,
    'position' => 0,
    'visibility' => 0,
  );

  $export['wysiwyg_filter_styles_layout_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_list_3';
  $strongarm->value = array(
    'list-style' => 'list-style',
    'list-style-type' => 'list-style-type',
    'list-style-image' => 0,
    'list-style-position' => 0,
  );

  $export['wysiwyg_filter_styles_list_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_positioning_3';
  $strongarm->value = array(
    'bottom' => 'bottom',
    'left' => 'left',
    'right' => 'right',
    'top' => 'top',
    'clip' => 0,
    'overflow' => 0,
    'vertical-align' => 0,
    'z-index' => 0,
  );

  $export['wysiwyg_filter_styles_positioning_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_table_3';
  $strongarm->value = array(
    'border-collapse' => 0,
    'border-spacing' => 0,
    'caption-side' => 0,
    'empty-cells' => 0,
    'table-layout' => 0,
  );

  $export['wysiwyg_filter_styles_table_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_text_3';
  $strongarm->value = array(
    'text-align' => 'text-align',
    'text-decoration' => 'text-decoration',
    'text-indent' => 0,
    'text-transform' => 0,
    'letter-spacing' => 0,
    'word-spacing' => 0,
    'white-space' => 0,
    'direction' => 0,
    'unicode-bidi' => 0,
  );

  $export['wysiwyg_filter_styles_text_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_styles_user_3';
  $strongarm->value = array(
    'cursor' => 0,
    'outline' => 0,
    'outline-width' => 0,
    'outline-style' => 0,
    'outline-color' => 0,
    'zoom' => 0,
  );

  $export['wysiwyg_filter_styles_user_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_classes_3';
  $strongarm->value = array(
    0 => 'node-section',
    2 => 'node-subsection',
    4 => 'img-right',
    6 => 'img-left',
    8 => 'clear-block',
  );

  $export['wysiwyg_filter_valid_classes_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_parsed_3';
  $strongarm->value = array(
    'a' => array(
      'href' => array(),
      'target' => array(
        'values' => array(
          0 => '_blank',
        ),
      ),
      'name' => array(),
      'rel' => array(),
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'b' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'blockquote' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'br' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'caption' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'cite' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'code' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'dd' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'div' => array(
      'align' => array(
        'values' => array(
          0 => 'center',
          1 => 'justify',
          2 => 'left',
          3 => 'right',
        ),
      ),
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'dl' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'dt' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'em' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'h2' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'h3' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'h4' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'h5' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'h6' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'hr' => array(
      'size' => array(),
      'noshade' => array(),
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'i' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'img' => array(
      'src' => array(),
      'width' => array(),
      'height' => array(),
      'align' => array(),
      'hspace' => array(),
      'vspace' => array(),
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'li' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'ol' => array(
      'type' => array(),
      'compact' => array(),
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'p' => array(
      'align' => array(
        'values' => array(
          0 => 'center',
          1 => 'justify',
          2 => 'left',
          3 => 'right',
        ),
      ),
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'span' => array(
      'align' => array(
        'values' => array(
          0 => 'center',
          1 => 'justify',
          2 => 'left',
          3 => 'right',
        ),
      ),
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'strong' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'u' => array(
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
    'ul' => array(
      'type' => array(),
      'compact' => array(),
      'class' => array(),
      'style' => array(),
      'title' => array(),
    ),
  );

  $export['wysiwyg_filter_valid_elements_parsed_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_raw_3';
  $strongarm->value = '@[class|style|title],
a[href|target<_blank|name|rel], 
-div[align<center?justify?left?right],
#p[align<center?justify?left?right],
strong/b,em/i,u,
-ol[type|compact],-ul[type|compact],-li,-dl,-dt,-dd,
caption,-h2,-h3,-h4,-h5,-h6,hr[size|noshade],
br,cite,code,-blockquote,
img[src|width|height|align|hspace|vspace], 
-span[align<center?justify?left?right]';

  $export['wysiwyg_filter_valid_elements_raw_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_ids_3';
  $strongarm->value = array();

  $export['wysiwyg_filter_valid_ids_3'] = $strongarm;
  return $export;
}
