<?php

/**
 * Implementation of hook_strongarm().
 */
function contributor_wysiwyg_strongarm() {
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
  return $export;
}
