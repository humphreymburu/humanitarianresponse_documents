<?php
/**
 * @file
 * humanitarianresponse_documents.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function humanitarianresponse_documents_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|document|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'document';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'teaser_labels' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|document|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function humanitarianresponse_documents_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|document|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'document';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'teaser_labels',
        1 => 'title',
      ),
      'left' => array(
        2 => 'field_document_thumbnail',
      ),
      'right' => array(
        3 => 'field_document_type',
        4 => 'field_organizations',
        5 => 'field_document_files',
        7 => 'field_publication_date',
      ),
      'footer' => array(
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'teaser_labels' => 'header',
      'title' => 'header',
      'field_document_thumbnail' => 'left',
      'field_document_type' => 'right',
      'field_organizations' => 'right',
      'field_document_files' => 'right',
      'node_link' => 'footer',
      'field_publication_date' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|document|teaser'] = $ds_layout;

  return $export;
}
