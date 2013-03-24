<?php

/**
 * Implements hook_views_default_views().
 */
function hamster_views_default_views() {
  
  $views = array();

  $view = new view();
  $view->name = 'hamsters_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'hamster';
  $view->human_name = 'Hamsters List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hamsters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'name' => 'name',
    'gender' => 'gender',
    'weight' => 'weight',
    'birthdate' => 'birthdate',
    'capacity' => 'capacity',
    'name_1' => 'name_1',
    'image' => 'image',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing',
    'nothing_2' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'gender' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'weight' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'birthdate' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'capacity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Hamster: Habitat */
  $handler->display->display_options['relationships']['habitat_id']['id'] = 'habitat_id';
  $handler->display->display_options['relationships']['habitat_id']['table'] = 'hamster';
  $handler->display->display_options['relationships']['habitat_id']['field'] = 'habitat_id';
  /* Field: Hamster: ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'hamster';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Hamster: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'hamster';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Hamster: Gender */
  $handler->display->display_options['fields']['gender']['id'] = 'gender';
  $handler->display->display_options['fields']['gender']['table'] = 'hamster';
  $handler->display->display_options['fields']['gender']['field'] = 'gender';
  /* Field: Hamster: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'hamster';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['suffix'] = ' g';
  /* Field: Hamster: Birth Date */
  $handler->display->display_options['fields']['birthdate']['id'] = 'birthdate';
  $handler->display->display_options['fields']['birthdate']['table'] = 'hamster';
  $handler->display->display_options['fields']['birthdate']['field'] = 'birthdate';
  $handler->display->display_options['fields']['birthdate']['date_format'] = 'custom';
  $handler->display->display_options['fields']['birthdate']['custom_date_format'] = 'F j, Y';
  /* Field: Hamster: Image File ID */
  $handler->display->display_options['fields']['image']['id'] = 'image';
  $handler->display->display_options['fields']['image']['table'] = 'hamster';
  $handler->display->display_options['fields']['image']['field'] = 'image';
  $handler->display->display_options['fields']['image']['label'] = 'Image';
  $handler->display->display_options['fields']['image']['image_style'] = 'thumbnail';
  /* Field: Hamster Habitat: Capacity */
  $handler->display->display_options['fields']['capacity']['id'] = 'capacity';
  $handler->display->display_options['fields']['capacity']['table'] = 'hamster_habitat';
  $handler->display->display_options['fields']['capacity']['field'] = 'capacity';
  $handler->display->display_options['fields']['capacity']['relationship'] = 'habitat_id';
  $handler->display->display_options['fields']['capacity']['exclude'] = TRUE;
  /* Field: Hamster Habitat: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'hamster_habitat';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'habitat_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Habitat';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '[name_1] ([capacity])';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'hamster/[id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'hamster/[id]/edit?destination=hamster';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'hamster/[id]/delete?destination=hamster';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Contextual filter: Hamster: Gender */
  $handler->display->display_options['arguments']['gender']['id'] = 'gender';
  $handler->display->display_options['arguments']['gender']['table'] = 'hamster';
  $handler->display->display_options['arguments']['gender']['field'] = 'gender';
  $handler->display->display_options['arguments']['gender']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gender']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gender']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gender']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gender']['limit'] = '0';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'hamster_habitat';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'habitat_id';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Hamster: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'hamster';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Hamster: Gender */
  $handler->display->display_options['filters']['gender']['id'] = 'gender';
  $handler->display->display_options['filters']['gender']['table'] = 'hamster';
  $handler->display->display_options['filters']['gender']['field'] = 'gender';
  $handler->display->display_options['filters']['gender']['group'] = 1;
  $handler->display->display_options['filters']['gender']['exposed'] = TRUE;
  $handler->display->display_options['filters']['gender']['expose']['operator_id'] = 'gender_op';
  $handler->display->display_options['filters']['gender']['expose']['label'] = 'Gender';
  $handler->display->display_options['filters']['gender']['expose']['operator'] = 'gender_op';
  $handler->display->display_options['filters']['gender']['expose']['identifier'] = 'gender';
  $handler->display->display_options['filters']['gender']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Hamster: Habitat */
  $handler->display->display_options['filters']['habitat_id']['id'] = 'habitat_id';
  $handler->display->display_options['filters']['habitat_id']['table'] = 'hamster';
  $handler->display->display_options['filters']['habitat_id']['field'] = 'habitat_id';
  $handler->display->display_options['filters']['habitat_id']['group'] = 1;
  $handler->display->display_options['filters']['habitat_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['habitat_id']['expose']['operator_id'] = 'habitat_id_op';
  $handler->display->display_options['filters']['habitat_id']['expose']['label'] = 'Habitat';
  $handler->display->display_options['filters']['habitat_id']['expose']['operator'] = 'habitat_id_op';
  $handler->display->display_options['filters']['habitat_id']['expose']['identifier'] = 'habitat_id';
  $handler->display->display_options['filters']['habitat_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Hamster: Weight */
  $handler->display->display_options['filters']['weight']['id'] = 'weight';
  $handler->display->display_options['filters']['weight']['table'] = 'hamster';
  $handler->display->display_options['filters']['weight']['field'] = 'weight';
  $handler->display->display_options['filters']['weight']['operator'] = '>';
  $handler->display->display_options['filters']['weight']['group'] = 1;
  $handler->display->display_options['filters']['weight']['exposed'] = TRUE;
  $handler->display->display_options['filters']['weight']['expose']['operator_id'] = 'weight_op';
  $handler->display->display_options['filters']['weight']['expose']['label'] = 'Weight';
  $handler->display->display_options['filters']['weight']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['weight']['expose']['operator'] = 'weight_op';
  $handler->display->display_options['filters']['weight']['expose']['identifier'] = 'weight';
  $handler->display->display_options['filters']['weight']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Hamster: Birth Date */
  $handler->display->display_options['filters']['birthdate']['id'] = 'birthdate';
  $handler->display->display_options['filters']['birthdate']['table'] = 'hamster';
  $handler->display->display_options['filters']['birthdate']['field'] = 'birthdate';
  $handler->display->display_options['filters']['birthdate']['operator'] = '>';
  $handler->display->display_options['filters']['birthdate']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['birthdate']['group'] = 1;
  $handler->display->display_options['filters']['birthdate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['birthdate']['expose']['operator_id'] = 'birthdate_op';
  $handler->display->display_options['filters']['birthdate']['expose']['label'] = 'Birth Date';
  $handler->display->display_options['filters']['birthdate']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['birthdate']['expose']['operator'] = 'birthdate_op';
  $handler->display->display_options['filters']['birthdate']['expose']['identifier'] = 'birthdate';
  $handler->display->display_options['filters']['birthdate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'hamster';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Hamsters';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  $views[$view->name] = $view;
  
  return $views;
}