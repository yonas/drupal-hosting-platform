<?php

/**
 * Implements hook_views_default_views().
 */
function dhp_views_default_views() {
    $view = new view();
    $view->name = 'distributions';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Distributions';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE;

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Distributions';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
      'nid' => 'nid',
      'title' => 'title',
      'field_site_url' => 'field_site_url',
      'field_template_ref' => 'field_template_ref',
      'delete_node' => 'delete_node',
      'edit_node' => 'edit_node',
      'created' => 'created',
    );
    $handler->display->display_options['style_options']['default'] = '-1';
    $handler->display->display_options['style_options']['info'] = array(
      'nid' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'title' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'field_site_url' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'field_template_ref' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'delete_node' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'edit_node' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'created' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
    );
    /* Header: Global: Text area */
    $handler->display->display_options['header']['area']['id'] = 'area';
    $handler->display->display_options['header']['area']['table'] = 'views';
    $handler->display->display_options['header']['area']['field'] = 'area';
    $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/distribution">Add distribution</a>';
    $handler->display->display_options['header']['area']['format'] = 'filtered_html';
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['area']['id'] = 'area';
    $handler->display->display_options['empty']['area']['table'] = 'views';
    $handler->display->display_options['empty']['area']['field'] = 'area';
    $handler->display->display_options['empty']['area']['empty'] = TRUE;
    $handler->display->display_options['empty']['area']['content'] = 'You have not created any distributions yet.';
    $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['label'] = '';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = 'Distribution';
    /* Field: Content: Distribution file */
    $handler->display->display_options['fields']['field_distribution_file']['id'] = 'field_distribution_file';
    $handler->display->display_options['fields']['field_distribution_file']['table'] = 'field_data_field_distribution_file';
    $handler->display->display_options['fields']['field_distribution_file']['field'] = 'field_distribution_file';
    $handler->display->display_options['fields']['field_distribution_file']['label'] = 'File';
    $handler->display->display_options['fields']['field_distribution_file']['click_sort_column'] = 'fid';
    /* Field: Content: Profiles */
    $handler->display->display_options['fields']['field_distribution_profiles']['id'] = 'field_distribution_profiles';
    $handler->display->display_options['fields']['field_distribution_profiles']['table'] = 'field_data_field_distribution_profiles';
    $handler->display->display_options['fields']['field_distribution_profiles']['field'] = 'field_distribution_profiles';
    $handler->display->display_options['fields']['field_distribution_profiles']['delta_offset'] = '0';
    /* Field: Content: Edit link */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
    /* Field: Content: Delete link */
    $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
    /* Field: Content: Post date */
    $handler->display->display_options['fields']['created']['id'] = 'created';
    $handler->display->display_options['fields']['created']['table'] = 'node';
    $handler->display->display_options['fields']['created']['field'] = 'created';
    $handler->display->display_options['fields']['created']['label'] = 'Created';
    $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
    $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
    /* Sort criterion: Content: Title */
    $handler->display->display_options['sorts']['title']['id'] = 'title';
    $handler->display->display_options['sorts']['title']['table'] = 'node';
    $handler->display->display_options['sorts']['title']['field'] = 'title';
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
      'distribution' => 'distribution',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 1;
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'distributions';
    $handler->display->display_options['menu']['type'] = 'normal';
    $handler->display->display_options['menu']['title'] = 'Distributions';
    $handler->display->display_options['menu']['weight'] = '3';
    $handler->display->display_options['menu']['name'] = 'main-menu';
    $handler->display->display_options['menu']['context'] = 0;
    $handler->display->display_options['menu']['context_only_inline'] = 0;
    $views[$view->name] = $view;

    $view = new view();
    $view->name = 'templates';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Templates';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE;

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Templates';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
      'nid' => 'nid',
      'title' => 'title',
      'view' => 'title',
      'nothing_1' => 'title',
      'expression' => 'title',
      'nothing' => 'nothing',
      'edit_node' => 'nothing',
      'delete_node' => 'nothing',
      'created' => 'nothing',
    );
    $handler->display->display_options['style_options']['default'] = '-1';
    $handler->display->display_options['style_options']['info'] = array(
      'nid' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'title' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'view' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'nothing_1' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'expression' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'nothing' => array(
        'align' => '',
        'separator' => ' | ',
        'empty_column' => 0,
      ),
      'edit_node' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'delete_node' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'created' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
    );
    /* Header: Global: Text area */
    $handler->display->display_options['header']['area']['id'] = 'area';
    $handler->display->display_options['header']['area']['table'] = 'views';
    $handler->display->display_options['header']['area']['field'] = 'area';
    $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/site-template">Add template</a>';
    $handler->display->display_options['header']['area']['format'] = 'filtered_html';
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['area']['id'] = 'area';
    $handler->display->display_options['empty']['area']['table'] = 'views';
    $handler->display->display_options['empty']['area']['field'] = 'area';
    $handler->display->display_options['empty']['area']['empty'] = TRUE;
    $handler->display->display_options['empty']['area']['content'] = 'You have not created any templates yet.';
    $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['label'] = '';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = 'Template';
    $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
    $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
    /* Field: Global: View */
    $handler->display->display_options['fields']['view']['id'] = 'view';
    $handler->display->display_options['fields']['view']['table'] = 'views';
    $handler->display->display_options['fields']['view']['field'] = 'view';
    $handler->display->display_options['fields']['view']['label'] = '';
    $handler->display->display_options['fields']['view']['exclude'] = TRUE;
    $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['view']['view'] = 'sites';
    $handler->display->display_options['fields']['view']['display'] = 'page_2';
    $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
    /* Field: Total sites */
    $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
    $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
    $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
    $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Total sites';
    $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
    $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[view]';
    $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = TRUE;
    $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = TRUE;
    /* Field: Global: Math expression */
    $handler->display->display_options['fields']['expression']['id'] = 'expression';
    $handler->display->display_options['fields']['expression']['table'] = 'views';
    $handler->display->display_options['fields']['expression']['field'] = 'expression';
    $handler->display->display_options['fields']['expression']['alter']['make_link'] = TRUE;
    $handler->display->display_options['fields']['expression']['alter']['path'] = 'node/[nid]/sites';
    $handler->display->display_options['fields']['expression']['precision'] = '0';
    $handler->display->display_options['fields']['expression']['separator'] = '';
    $handler->display->display_options['fields']['expression']['format_plural'] = TRUE;
    $handler->display->display_options['fields']['expression']['format_plural_singular'] = '1 site';
    $handler->display->display_options['fields']['expression']['format_plural_plural'] = '@count sites';
    $handler->display->display_options['fields']['expression']['prefix'] = ' (';
    $handler->display->display_options['fields']['expression']['suffix'] = ')';
    $handler->display->display_options['fields']['expression']['expression'] = '[nothing_1]';
    /* Field: Create link */
    $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['table'] = 'views';
    $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
    $handler->display->display_options['fields']['nothing']['ui_name'] = 'Create link';
    $handler->display->display_options['fields']['nothing']['label'] = '';
    $handler->display->display_options['fields']['nothing']['alter']['text'] = 'create site';
    $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
    $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/create';
    $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
    /* Field: Content: Edit link */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    /* Field: Content: Delete link */
    $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
    /* Field: Content: Post date */
    $handler->display->display_options['fields']['created']['id'] = 'created';
    $handler->display->display_options['fields']['created']['table'] = 'node';
    $handler->display->display_options['fields']['created']['field'] = 'created';
    $handler->display->display_options['fields']['created']['label'] = 'Created';
    $handler->display->display_options['fields']['created']['date_format'] = 'long';
    $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
    /* Sort criterion: Content: Title */
    $handler->display->display_options['sorts']['title']['id'] = 'title';
    $handler->display->display_options['sorts']['title']['table'] = 'node';
    $handler->display->display_options['sorts']['title']['field'] = 'title';
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
      'site_template' => 'site_template',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 1;
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'templates';
    $handler->display->display_options['menu']['type'] = 'normal';
    $handler->display->display_options['menu']['title'] = 'Templates';
    $handler->display->display_options['menu']['weight'] = '1';
    $handler->display->display_options['menu']['name'] = 'main-menu';
    $handler->display->display_options['menu']['context'] = 0;
    $handler->display->display_options['menu']['context_only_inline'] = 0;
    $views[$view->name] = $view;

    $view = new view();
    $view->name = 'sites';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Sites';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE;

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Sites';
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
      'nid' => 'nid',
      'title' => 'title',
      'field_site_url' => 'field_site_url',
      'field_template_ref' => 'field_template_ref',
      'delete_node' => 'delete_node',
      'edit_node' => 'edit_node',
      'created' => 'created',
    );
    $handler->display->display_options['style_options']['default'] = '-1';
    $handler->display->display_options['style_options']['info'] = array(
      'nid' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'title' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'field_site_url' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'field_template_ref' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'delete_node' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'edit_node' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'created' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
    );
    /* No results behavior: Global: Text area */
    $handler->display->display_options['empty']['area']['id'] = 'area';
    $handler->display->display_options['empty']['area']['table'] = 'views';
    $handler->display->display_options['empty']['area']['field'] = 'area';
    $handler->display->display_options['empty']['area']['empty'] = TRUE;
    $handler->display->display_options['empty']['area']['content'] = 'You have not created any sites yet.';
    $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['label'] = '';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = 'Site';
    /* Field: Content: Site URL */
    $handler->display->display_options['fields']['field_site_url']['id'] = 'field_site_url';
    $handler->display->display_options['fields']['field_site_url']['table'] = 'field_data_field_site_url';
    $handler->display->display_options['fields']['field_site_url']['field'] = 'field_site_url';
    $handler->display->display_options['fields']['field_site_url']['field_api_classes'] = TRUE;
    /* Field: Content: Template */
    $handler->display->display_options['fields']['field_template_ref']['id'] = 'field_template_ref';
    $handler->display->display_options['fields']['field_template_ref']['table'] = 'field_data_field_template_ref';
    $handler->display->display_options['fields']['field_template_ref']['field'] = 'field_template_ref';
    $handler->display->display_options['fields']['field_template_ref']['settings'] = array(
      'link' => 1,
    );
    /* Field: Content: Edit link */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
    /* Field: Content: Delete link */
    $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
    /* Field: Content: Post date */
    $handler->display->display_options['fields']['created']['id'] = 'created';
    $handler->display->display_options['fields']['created']['table'] = 'node';
    $handler->display->display_options['fields']['created']['field'] = 'created';
    $handler->display->display_options['fields']['created']['label'] = 'Created';
    $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
    $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
    /* Field: Content: Site Status */
    $handler->display->display_options['fields']['field_site_status']['id'] = 'field_site_status';
    $handler->display->display_options['fields']['field_site_status']['table'] = 'field_data_field_site_status';
    $handler->display->display_options['fields']['field_site_status']['field'] = 'field_site_status';
    $handler->display->display_options['fields']['field_site_status']['label'] = 'Status';
    /* Sort criterion: Content: Post date */
    $handler->display->display_options['sorts']['created']['id'] = 'created';
    $handler->display->display_options['sorts']['created']['table'] = 'node';
    $handler->display->display_options['sorts']['created']['field'] = 'created';
    $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['sorts']['created']['order'] = 'DESC';
    /* Filter criterion: Content: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['filters']['type']['value'] = array(
      'site' => 'site',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['filters']['status']['value'] = '1';
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'websites';
    $handler->display->display_options['menu']['type'] = 'normal';
    $handler->display->display_options['menu']['title'] = 'Sites';
    $handler->display->display_options['menu']['weight'] = '2';
    $handler->display->display_options['menu']['name'] = 'main-menu';
    $handler->display->display_options['menu']['context'] = 0;
    $handler->display->display_options['menu']['context_only_inline'] = 0;

    /* Display: Template tab */
    $handler = $view->new_display('page', 'Template tab', 'page_1');
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Nid */
    $handler->display->display_options['fields']['nid']['id'] = 'nid';
    $handler->display->display_options['fields']['nid']['table'] = 'node';
    $handler->display->display_options['fields']['nid']['field'] = 'nid';
    $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['fields']['nid']['label'] = '';
    $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
    $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['fields']['title']['label'] = 'Site';
    /* Field: Content: Site URL */
    $handler->display->display_options['fields']['field_site_url']['id'] = 'field_site_url';
    $handler->display->display_options['fields']['field_site_url']['table'] = 'field_data_field_site_url';
    $handler->display->display_options['fields']['field_site_url']['field'] = 'field_site_url';
    $handler->display->display_options['fields']['field_site_url']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['fields']['field_site_url']['field_api_classes'] = TRUE;
    /* Field: Content: Template */
    $handler->display->display_options['fields']['field_template_ref']['id'] = 'field_template_ref';
    $handler->display->display_options['fields']['field_template_ref']['table'] = 'field_data_field_template_ref';
    $handler->display->display_options['fields']['field_template_ref']['field'] = 'field_template_ref';
    $handler->display->display_options['fields']['field_template_ref']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['fields']['field_template_ref']['settings'] = array(
      'link' => 1,
    );
    /* Field: Content: Edit link */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
    /* Field: Content: Delete link */
    $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
    /* Field: Content: Post date */
    $handler->display->display_options['fields']['created']['id'] = 'created';
    $handler->display->display_options['fields']['created']['table'] = 'node';
    $handler->display->display_options['fields']['created']['field'] = 'created';
    $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_template_ref_node';
    $handler->display->display_options['fields']['created']['label'] = 'Created';
    $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
    $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Template (field_template_ref) */
    $handler->display->display_options['arguments']['field_template_ref_target_id']['id'] = 'field_template_ref_target_id';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['table'] = 'field_data_field_template_ref';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['field'] = 'field_template_ref_target_id';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['specify_validation'] = TRUE;
    $handler->display->display_options['arguments']['field_template_ref_target_id']['validate']['type'] = 'node';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['validate_options']['types'] = array(
      'site_template' => 'site_template',
    );
    $handler->display->display_options['path'] = 'node/%/sites';
    $handler->display->display_options['menu']['type'] = 'tab';
    $handler->display->display_options['menu']['title'] = 'Sites';
    $handler->display->display_options['menu']['weight'] = '0';
    $handler->display->display_options['menu']['context'] = 0;
    $handler->display->display_options['menu']['context_only_inline'] = 0;

    /* Display: Total sites */
    $handler = $view->new_display('page', 'Total sites', 'page_2');
    $handler->display->display_options['defaults']['group_by'] = FALSE;
    $handler->display->display_options['group_by'] = TRUE;
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['style_options']['default_row_class'] = FALSE;
    $handler->display->display_options['style_options']['row_class_special'] = FALSE;
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['row_plugin'] = 'fields';
    $handler->display->display_options['defaults']['row_options'] = FALSE;
    $handler->display->display_options['defaults']['fields'] = FALSE;
    /* Field: Content: Type */
    $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
    $handler->display->display_options['fields']['type_1']['table'] = 'node';
    $handler->display->display_options['fields']['type_1']['field'] = 'type';
    $handler->display->display_options['fields']['type_1']['group_type'] = 'count';
    $handler->display->display_options['fields']['type_1']['label'] = '';
    $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['type_1']['separator'] = '';
    $handler->display->display_options['defaults']['sorts'] = FALSE;
    $handler->display->display_options['defaults']['arguments'] = FALSE;
    /* Contextual filter: Content: Template (field_template_ref) */
    $handler->display->display_options['arguments']['field_template_ref_target_id']['id'] = 'field_template_ref_target_id';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['table'] = 'field_data_field_template_ref';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['field'] = 'field_template_ref_target_id';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['default_action'] = 'not found';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['default_argument_type'] = 'fixed';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['specify_validation'] = TRUE;
    $handler->display->display_options['arguments']['field_template_ref_target_id']['validate']['type'] = 'node';
    $handler->display->display_options['arguments']['field_template_ref_target_id']['validate_options']['types'] = array(
      'site_template' => 'site_template',
    );
    $handler->display->display_options['path'] = 'node/%/sites';
    $handler->display->display_options['menu']['type'] = 'tab';
    $handler->display->display_options['menu']['title'] = 'Sites';
    $handler->display->display_options['menu']['weight'] = '0';
    $handler->display->display_options['menu']['context'] = 0;
    $handler->display->display_options['menu']['context_only_inline'] = 0;
    $views[$view->name] = $view;

    cache_clear_all('*', 'cache_menu', TRUE);
    return $views;
}
