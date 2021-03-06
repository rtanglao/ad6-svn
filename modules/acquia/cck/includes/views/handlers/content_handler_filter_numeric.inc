<?php
// $Id: content_handler_filter_numeric.inc,v 1.1.2.2 2008/10/04 13:14:21 karens Exp $

/**
 * @file
 * The subclass simply adds properties,
 * for field-specific subclasses to use if they need to.
 */
class content_handler_filter_numeric extends views_handler_filter_numeric {
  var $content_field;

  function construct() {
    parent::construct();
    $this->content_field = content_fields($this->definition['content_field_name']);
    $this->additional_fields = $this->definition['additional fields'];
  }
}