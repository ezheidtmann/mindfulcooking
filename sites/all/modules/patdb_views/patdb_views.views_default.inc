<?php
/**
 * @file
 * patdb_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function patdb_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'mail_to_school_pony_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mail to school (PONY)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mail to school (PONY)';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro & links to PDF';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'This view allows you to print mailing labels for mail to be sent to members\' schools. Please be patient when clicking each link; the output is generated dynamically.

PDF: <a href="mail-to-school/all-reps.pdf">All Building Reps (PONY)</a>: School / Full Name / PPS Mail Destination
PDF: <a href="mail-to-school/head-reps.pdf">Head Reps (PONY)</a>: School / Full Name / Building Count

Both lists exclude substitutes, but include even those members who are listed as preferring that mail be sent to their home address.

This page allows you to preview which members will be printed on the labels. Select a role from the drop-down and hit "Apply" to change the result set. Be aware that the address format shown here does not necessarily match what is printed on the labels.';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Relationship: Content: Roles (field_roles) */
  $handler->display->display_options['relationships']['field_roles_tid']['id'] = 'field_roles_tid';
  $handler->display->display_options['relationships']['field_roles_tid']['table'] = 'field_data_field_roles';
  $handler->display->display_options['relationships']['field_roles_tid']['field'] = 'field_roles_tid';
  $handler->display->display_options['relationships']['field_roles_tid']['required'] = 1;
  /* Relationship: Content: Committee Member (field_committee_member) */
  $handler->display->display_options['relationships']['field_committee_member_tid']['id'] = 'field_committee_member_tid';
  $handler->display->display_options['relationships']['field_committee_member_tid']['table'] = 'field_data_field_committee_member';
  $handler->display->display_options['relationships']['field_committee_member_tid']['field'] = 'field_committee_member_tid';
  $handler->display->display_options['relationships']['field_committee_member_tid']['required'] = 0;
  /* Relationship: Content: School (field_school) */
  $handler->display->display_options['relationships']['field_school_nid']['id'] = 'field_school_nid';
  $handler->display->display_options['relationships']['field_school_nid']['table'] = 'field_data_field_school';
  $handler->display->display_options['relationships']['field_school_nid']['field'] = 'field_school_nid';
  $handler->display->display_options['relationships']['field_school_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_school_nid']['delta'] = '0';
  /* Field: Content: School */
  $handler->display->display_options['fields']['field_school']['id'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['table'] = 'field_data_field_school';
  $handler->display->display_options['fields']['field_school']['field'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['label'] = '';
  $handler->display->display_options['fields']['field_school']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_school']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_school']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_school']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_school']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_school']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_school']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_school']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_school']['field_api_classes'] = 0;
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
  /* Field: Content: PPS Mail Destination */
  $handler->display->display_options['fields']['field_pps_mail']['id'] = 'field_pps_mail';
  $handler->display->display_options['fields']['field_pps_mail']['table'] = 'field_data_field_pps_mail';
  $handler->display->display_options['fields']['field_pps_mail']['field'] = 'field_pps_mail';
  $handler->display->display_options['fields']['field_pps_mail']['label'] = '';
  $handler->display->display_options['fields']['field_pps_mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pps_mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pps_mail']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_pps_mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['field_api_classes'] = 0;
  /* Field: Content: Building Count */
  $handler->display->display_options['fields']['field_building_count']['id'] = 'field_building_count';
  $handler->display->display_options['fields']['field_building_count']['table'] = 'field_data_field_building_count';
  $handler->display->display_options['fields']['field_building_count']['field'] = 'field_building_count';
  $handler->display->display_options['fields']['field_building_count']['relationship'] = 'field_school_nid';
  $handler->display->display_options['fields']['field_building_count']['label'] = '';
  $handler->display->display_options['fields']['field_building_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_building_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_building_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_building_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_building_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_building_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_building_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_building_count']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_building_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_building_count']['field_api_classes'] = 0;
  /* Sort criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['sorts']['field_cluster_nid']['id'] = 'field_cluster_nid';
  $handler->display->display_options['sorts']['field_cluster_nid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['sorts']['field_cluster_nid']['field'] = 'field_cluster_nid';
  $handler->display->display_options['sorts']['field_cluster_nid']['relationship'] = 'field_school_nid';
  /* Sort criterion: Content: School (field_school) */
  $handler->display->display_options['sorts']['field_school_nid']['id'] = 'field_school_nid';
  $handler->display->display_options['sorts']['field_school_nid']['table'] = 'field_data_field_school';
  $handler->display->display_options['sorts']['field_school_nid']['field'] = 'field_school_nid';
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
    'member' => 'member',
  );
  /* Filter criterion: Content: Roles (field_roles) */
  $handler->display->display_options['filters']['field_roles_tid']['id'] = 'field_roles_tid';
  $handler->display->display_options['filters']['field_roles_tid']['table'] = 'field_data_field_roles';
  $handler->display->display_options['filters']['field_roles_tid']['field'] = 'field_roles_tid';
  $handler->display->display_options['filters']['field_roles_tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['field_roles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_roles_tid']['expose']['operator_id'] = 'field_roles_tid_op';
  $handler->display->display_options['filters']['field_roles_tid']['expose']['label'] = 'Roles (field_roles)';
  $handler->display->display_options['filters']['field_roles_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_roles_tid']['expose']['operator'] = 'field_roles_tid_op';
  $handler->display->display_options['filters']['field_roles_tid']['expose']['identifier'] = 'field_roles_tid';
  $handler->display->display_options['filters']['field_roles_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_roles_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_roles_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_roles_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_roles_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_roles_tid']['vocabulary'] = 'roles';
  /* Filter criterion: Content: School (field_school) */
  $handler->display->display_options['filters']['field_school_nid']['id'] = 'field_school_nid';
  $handler->display->display_options['filters']['field_school_nid']['table'] = 'field_data_field_school';
  $handler->display->display_options['filters']['field_school_nid']['field'] = 'field_school_nid';
  $handler->display->display_options['filters']['field_school_nid']['operator'] = 'not in';
  $handler->display->display_options['filters']['field_school_nid']['value'] = array(
    63 => '63',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'member' => 'member',
  );
  /* Filter criterion: Content: Roles (field_roles) */
  $handler->display->display_options['filters']['field_roles_tid']['id'] = 'field_roles_tid';
  $handler->display->display_options['filters']['field_roles_tid']['table'] = 'field_data_field_roles';
  $handler->display->display_options['filters']['field_roles_tid']['field'] = 'field_roles_tid';
  $handler->display->display_options['filters']['field_roles_tid']['value'] = array(
    10 => '10',
    11 => '11',
  );
  $handler->display->display_options['filters']['field_roles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_roles_tid']['expose']['operator_id'] = 'field_roles_tid_op';
  $handler->display->display_options['filters']['field_roles_tid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['field_roles_tid']['expose']['operator'] = 'field_roles_tid_op';
  $handler->display->display_options['filters']['field_roles_tid']['expose']['identifier'] = 'field_roles_tid';
  $handler->display->display_options['filters']['field_roles_tid']['expose']['required'] = 1;
  $handler->display->display_options['filters']['field_roles_tid']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['field_roles_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_roles_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_roles_tid']['vocabulary'] = 'roles';
  $handler->display->display_options['filters']['field_roles_tid']['error_message'] = 1;
  /* Filter criterion: Content: School (field_school) */
  $handler->display->display_options['filters']['field_school_nid']['id'] = 'field_school_nid';
  $handler->display->display_options['filters']['field_school_nid']['table'] = 'field_data_field_school';
  $handler->display->display_options['filters']['field_school_nid']['field'] = 'field_school_nid';
  $handler->display->display_options['filters']['field_school_nid']['operator'] = 'not in';
  $handler->display->display_options['filters']['field_school_nid']['value'] = array(
    63 => '63',
  );
  $handler->display->display_options['path'] = 'reports/mail-to-school';

  /* Display: All Reps (PDF) */
  $handler = $view->new_display('mailing', 'All Reps (PDF)', 'mailing_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'mailing_avery';
  $handler->display->display_options['path'] = 'reports/mail-to-school/all-reps.pdf';

  /* Display: Head Reps (PDF) */
  $handler = $view->new_display('mailing', 'Head Reps (PDF)', 'mailing_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'mailing_avery';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: School */
  $handler->display->display_options['fields']['field_school']['id'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['table'] = 'field_data_field_school';
  $handler->display->display_options['fields']['field_school']['field'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['label'] = '';
  $handler->display->display_options['fields']['field_school']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_school']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_school']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_school']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_school']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_school']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_school']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_school']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_school']['field_api_classes'] = 0;
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
  /* Field: Content: PPS Mail Destination */
  $handler->display->display_options['fields']['field_pps_mail']['id'] = 'field_pps_mail';
  $handler->display->display_options['fields']['field_pps_mail']['table'] = 'field_data_field_pps_mail';
  $handler->display->display_options['fields']['field_pps_mail']['field'] = 'field_pps_mail';
  $handler->display->display_options['fields']['field_pps_mail']['label'] = '';
  $handler->display->display_options['fields']['field_pps_mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pps_mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pps_mail']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_pps_mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_pps_mail']['field_api_classes'] = 0;
  /* Field: Content: Building Count */
  $handler->display->display_options['fields']['field_building_count']['id'] = 'field_building_count';
  $handler->display->display_options['fields']['field_building_count']['table'] = 'field_data_field_building_count';
  $handler->display->display_options['fields']['field_building_count']['field'] = 'field_building_count';
  $handler->display->display_options['fields']['field_building_count']['relationship'] = 'field_school_nid';
  $handler->display->display_options['fields']['field_building_count']['label'] = '';
  $handler->display->display_options['fields']['field_building_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_building_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_building_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_building_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_building_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_building_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_building_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_building_count']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_building_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_building_count']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'reports/mail-to-school/head-reps.pdf';
  $export['mail_to_school_pony_'] = $view;

  $view = new view;
  $view->name = 'members_by_committee';
  $view->description = 'List of members, grouped by school';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Members by term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members by committee';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Committee Member (field_committee_member) */
  $handler->display->display_options['relationships']['field_committee_member_tid']['id'] = 'field_committee_member_tid';
  $handler->display->display_options['relationships']['field_committee_member_tid']['table'] = 'field_data_field_committee_member';
  $handler->display->display_options['relationships']['field_committee_member_tid']['field'] = 'field_committee_member_tid';
  $handler->display->display_options['relationships']['field_committee_member_tid']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Member Name';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Roles */
  $handler->display->display_options['fields']['field_roles']['id'] = 'field_roles';
  $handler->display->display_options['fields']['field_roles']['table'] = 'field_data_field_roles';
  $handler->display->display_options['fields']['field_roles']['field'] = 'field_roles';
  $handler->display->display_options['fields']['field_roles']['label'] = 'Role(s)';
  $handler->display->display_options['fields']['field_roles']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_roles']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_roles']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_roles']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_roles']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_roles']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_roles']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_roles']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_roles']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_roles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_roles']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_roles']['field_api_classes'] = 0;
  /* Field: Content: School */
  $handler->display->display_options['fields']['field_school']['id'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['table'] = 'field_data_field_school';
  $handler->display->display_options['fields']['field_school']['field'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_school']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_school']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_school']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_school']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_school']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_school']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_school']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_school']['field_api_classes'] = 0;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = 'Home Address';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  /* Field: Content: Committee Chair */
  $handler->display->display_options['fields']['field_committee_chair']['id'] = 'field_committee_chair';
  $handler->display->display_options['fields']['field_committee_chair']['table'] = 'field_data_field_committee_chair';
  $handler->display->display_options['fields']['field_committee_chair']['field'] = 'field_committee_chair';
  $handler->display->display_options['fields']['field_committee_chair']['label'] = 'Chair of';
  $handler->display->display_options['fields']['field_committee_chair']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_committee_chair']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_committee_chair']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['field_api_classes'] = 0;
  /* Field: Content: Committee Member */
  $handler->display->display_options['fields']['field_committee_member']['id'] = 'field_committee_member';
  $handler->display->display_options['fields']['field_committee_member']['table'] = 'field_data_field_committee_member';
  $handler->display->display_options['fields']['field_committee_member']['field'] = 'field_committee_member';
  $handler->display->display_options['fields']['field_committee_member']['label'] = 'Member of';
  $handler->display->display_options['fields']['field_committee_member']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_committee_member']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Committee Member (field_committee_member) */
  $handler->display->display_options['arguments']['field_committee_member_tid']['id'] = 'field_committee_member_tid';
  $handler->display->display_options['arguments']['field_committee_member_tid']['table'] = 'field_data_field_committee_member';
  $handler->display->display_options['arguments']['field_committee_member_tid']['field'] = 'field_committee_member_tid';
  $handler->display->display_options['arguments']['field_committee_member_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_committee_member_tid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_committee_member_tid']['title'] = '%1 Committee';
  $handler->display->display_options['arguments']['field_committee_member_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_committee_member_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_committee_member_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_committee_member_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_committee_member_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_committee_member_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_committee_member_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_committee_member_tid']['validate_options']['vocabularies'] = array(
    'committees' => 'committees',
    'roles' => 0,
  );
  $handler->display->display_options['arguments']['field_committee_member_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_committee_member_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_committee_member_tid']['not'] = 0;
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
    'member' => 'member',
  );

  /* Display: Page switch/committee */
  $handler = $view->new_display('page', 'Page switch/committee', 'page');
  $handler->display->display_options['path'] = 'switch/committee';

  /* Display: Page switch/roles */
  $handler = $view->new_display('page', 'Page switch/roles', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Members by role';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Roles (field_roles) */
  $handler->display->display_options['arguments']['field_roles_tid']['id'] = 'field_roles_tid';
  $handler->display->display_options['arguments']['field_roles_tid']['table'] = 'field_data_field_roles';
  $handler->display->display_options['arguments']['field_roles_tid']['field'] = 'field_roles_tid';
  $handler->display->display_options['arguments']['field_roles_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_roles_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_roles_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_roles_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_roles_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_roles_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_roles_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_roles_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_roles_tid']['validate_options']['vocabularies'] = array(
    'roles' => 'roles',
    'committees' => 0,
  );
  $handler->display->display_options['arguments']['field_roles_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_roles_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_roles_tid']['not'] = 0;
  $handler->display->display_options['path'] = 'switch/role';
  $export['members_by_committee'] = $view;

  $view = new view;
  $view->name = 'members_by_school';
  $view->description = 'List of members, grouped by school';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Members by school';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members by school';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Member Name';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Roles */
  $handler->display->display_options['fields']['field_roles']['id'] = 'field_roles';
  $handler->display->display_options['fields']['field_roles']['table'] = 'field_data_field_roles';
  $handler->display->display_options['fields']['field_roles']['field'] = 'field_roles';
  $handler->display->display_options['fields']['field_roles']['label'] = 'Role(s)';
  $handler->display->display_options['fields']['field_roles']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_roles']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_roles']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_roles']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_roles']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_roles']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_roles']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_roles']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_roles']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_roles']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_roles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_roles']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_roles']['field_api_classes'] = 0;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = 'Home Address';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  /* Field: Content: Committee Chair */
  $handler->display->display_options['fields']['field_committee_chair']['id'] = 'field_committee_chair';
  $handler->display->display_options['fields']['field_committee_chair']['table'] = 'field_data_field_committee_chair';
  $handler->display->display_options['fields']['field_committee_chair']['field'] = 'field_committee_chair';
  $handler->display->display_options['fields']['field_committee_chair']['label'] = 'Chair of';
  $handler->display->display_options['fields']['field_committee_chair']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_committee_chair']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_committee_chair']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_chair']['field_api_classes'] = 0;
  /* Field: Content: Committee Member */
  $handler->display->display_options['fields']['field_committee_member']['id'] = 'field_committee_member';
  $handler->display->display_options['fields']['field_committee_member']['table'] = 'field_data_field_committee_member';
  $handler->display->display_options['fields']['field_committee_member']['field'] = 'field_committee_member';
  $handler->display->display_options['fields']['field_committee_member']['label'] = 'Member of';
  $handler->display->display_options['fields']['field_committee_member']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_committee_member']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_committee_member']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_committee_member']['field_api_classes'] = 0;
  /* Field: Content: School */
  $handler->display->display_options['fields']['field_school']['id'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['table'] = 'field_data_field_school';
  $handler->display->display_options['fields']['field_school']['field'] = 'field_school';
  $handler->display->display_options['fields']['field_school']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_school']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_school']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_school']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_school']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_school']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_school']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_school']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_school']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_school']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_school']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: School (field_school) */
  $handler->display->display_options['arguments']['field_school_nid']['id'] = 'field_school_nid';
  $handler->display->display_options['arguments']['field_school_nid']['table'] = 'field_data_field_school';
  $handler->display->display_options['arguments']['field_school_nid']['field'] = 'field_school_nid';
  $handler->display->display_options['arguments']['field_school_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_school_nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_school_nid']['title'] = 'Members at %1';
  $handler->display->display_options['arguments']['field_school_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_school_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_school_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_school_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_school_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_school_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_school_nid']['not'] = 0;
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
    'member' => 'member',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: School (field_school) */
  $handler->display->display_options['arguments']['field_school_nid']['id'] = 'field_school_nid';
  $handler->display->display_options['arguments']['field_school_nid']['table'] = 'field_data_field_school';
  $handler->display->display_options['arguments']['field_school_nid']['field'] = 'field_school_nid';
  $handler->display->display_options['arguments']['field_school_nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_school_nid']['title'] = 'Members at %1';
  $handler->display->display_options['arguments']['field_school_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_school_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_school_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_school_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_school_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_school_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_school_nid']['not'] = 0;
  $handler->display->display_options['path'] = 'members/by-school';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'List Members at School';
  $export['members_by_school'] = $view;

  $view = new view;
  $view->name = 'schools_by_cluster';
  $view->description = 'List schools, filtered by cluster';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Schools by cluster';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse schools';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = 'field_cluster';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'edit_node' => 'title',
    'field_building_count' => 'field_building_count',
    'field_cluster' => 'field_cluster',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_building_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_cluster' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'School';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Building Count */
  $handler->display->display_options['fields']['field_building_count']['id'] = 'field_building_count';
  $handler->display->display_options['fields']['field_building_count']['table'] = 'field_data_field_building_count';
  $handler->display->display_options['fields']['field_building_count']['field'] = 'field_building_count';
  $handler->display->display_options['fields']['field_building_count']['label'] = 'Count';
  $handler->display->display_options['fields']['field_building_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_building_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_building_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_building_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_building_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_building_count']['empty'] = '- unknown -';
  $handler->display->display_options['fields']['field_building_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_building_count']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_building_count']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_building_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_building_count']['field_api_classes'] = 0;
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_cluster']['id'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['fields']['field_cluster']['field'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cluster']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['field_api_classes'] = 0;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['sorts']['field_cluster_nid']['id'] = 'field_cluster_nid';
  $handler->display->display_options['sorts']['field_cluster_nid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['sorts']['field_cluster_nid']['field'] = 'field_cluster_nid';
  /* Contextual filter: Content: Cluster (field_cluster) */
  $handler->display->display_options['arguments']['field_cluster_nid']['id'] = 'field_cluster_nid';
  $handler->display->display_options['arguments']['field_cluster_nid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['arguments']['field_cluster_nid']['field'] = 'field_cluster_nid';
  $handler->display->display_options['arguments']['field_cluster_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_cluster_nid']['summary']['format'] = 'default_summary';
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
    'school' => 'school',
  );
  /* Filter criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['filters']['field_cluster_nid']['id'] = 'field_cluster_nid';
  $handler->display->display_options['filters']['field_cluster_nid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['filters']['field_cluster_nid']['field'] = 'field_cluster_nid';
  $handler->display->display_options['filters']['field_cluster_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cluster_nid']['expose']['operator_id'] = 'field_cluster_nid_op';
  $handler->display->display_options['filters']['field_cluster_nid']['expose']['label'] = 'Filter by cluster';
  $handler->display->display_options['filters']['field_cluster_nid']['expose']['operator'] = 'field_cluster_nid_op';
  $handler->display->display_options['filters']['field_cluster_nid']['expose']['identifier'] = 'field_cluster_nid';
  $handler->display->display_options['filters']['field_cluster_nid']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'schools-by-cluster';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'edit_node' => 'title',
    'field_building_count' => 'field_building_count',
    'field_cluster' => 'field_cluster',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_building_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_cluster' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'School';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = ' - [edit_node]';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Building Count */
  $handler->display->display_options['fields']['field_building_count']['id'] = 'field_building_count';
  $handler->display->display_options['fields']['field_building_count']['table'] = 'field_data_field_building_count';
  $handler->display->display_options['fields']['field_building_count']['field'] = 'field_building_count';
  $handler->display->display_options['fields']['field_building_count']['label'] = 'Count';
  $handler->display->display_options['fields']['field_building_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_building_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_building_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_building_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_building_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_building_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_building_count']['empty'] = '- unknown -';
  $handler->display->display_options['fields']['field_building_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_building_count']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_building_count']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_building_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_building_count']['field_api_classes'] = 0;
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_cluster']['id'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['fields']['field_cluster']['field'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cluster']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['field_api_classes'] = 0;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Cluster (field_cluster) */
  $handler->display->display_options['arguments']['field_cluster_nid']['id'] = 'field_cluster_nid';
  $handler->display->display_options['arguments']['field_cluster_nid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['arguments']['field_cluster_nid']['field'] = 'field_cluster_nid';
  $handler->display->display_options['arguments']['field_cluster_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_cluster_nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_cluster_nid']['title'] = 'Schools in %1';
  $handler->display->display_options['arguments']['field_cluster_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_cluster_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_cluster_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_cluster_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_cluster_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_cluster_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_cluster_nid']['not'] = 0;
  $handler->display->display_options['block_description'] = 'List Schools by Cluster';
  $export['schools_by_cluster'] = $view;

  return $export;
}
