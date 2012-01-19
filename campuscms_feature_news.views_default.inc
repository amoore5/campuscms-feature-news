<?php
/**
 * @file
 * campuscms_feature_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function campuscms_feature_news_views_default_views() {
  $export = array();
  $view = new view;
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_news_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_date']['type'] = 'date_default';
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_news_date']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_news_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_news_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_news_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_news_image']['separator'] = '';
  $handler->display->display_options['fields']['field_news_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Date (field_news_date) */
  $handler->display->display_options['arguments']['field_news_date_value']['id'] = 'field_news_date_value_1';
  $handler->display->display_options['arguments']['field_news_date_value']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['arguments']['field_news_date_value']['field'] = 'field_news_date_value';
  $handler->display->display_options['arguments']['field_news_date_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_news_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_date_value']['granularity'] = 'year';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_news_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_date']['type'] = 'date_default';
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_news_date']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_news_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_news_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_news_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_news_image']['separator'] = '';
  $handler->display->display_options['fields']['field_news_image']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  /* Display: News By Year */
  $handler = $view->new_display('block', 'News By Year', 'news_by_year');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Date (field_news_date) */
  $handler->display->display_options['arguments']['field_news_date_value_1']['id'] = 'field_news_date_value_1';
  $handler->display->display_options['arguments']['field_news_date_value_1']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['arguments']['field_news_date_value_1']['field'] = 'field_news_date_value';
  $handler->display->display_options['arguments']['field_news_date_value_1']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_news_date_value_1']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_news_date_value_1']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['field_news_date_value_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_date_value_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_date_value_1']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_news_date_value_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_date_value_1']['granularity'] = 'year';

  /* Display: Recent News */
  $handler = $view->new_display('block', 'Recent News', 'recent_news');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent News Items';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_news_date']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_news_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_news_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_news_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_news_image']['separator'] = '';
  $handler->display->display_options['fields']['field_news_image']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['news'] = $view;
  return $export;
}
