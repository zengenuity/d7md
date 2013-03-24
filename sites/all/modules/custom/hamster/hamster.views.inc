<?php

function hamster_views_data() {
  $data = array();
  $data['hamster']['table'] = array(
    'group' => t("Hamster"),
    'title' => t("Hamster Information"),
    'help' => t("Lists information about hamsters."),
  );
  $data['hamster']['table']['base'] = array(
    'field' => 'id',
    'title' => 'Hamsters',
    'help' => t("Information about hamsters."),
  );
  
  $data['hamster']['id'] = array(
    'title' => t('ID'),
    'help' => t('The ID of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster']['name'] = array(
    'title' => t('Name'),
    'help' => t('The name of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster']['gender'] = array(
    'title' => t('Gender'),
    'help' => t('The gender of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_in_operator',
      'options callback' => 'hamster_views_gender_options',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
  $data['hamster']['weight'] = array(
    'title' => t('Weight'),
    'help' => t('The weight of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster']['birthdate'] = array(
    'title' => t('Birth Date'),
    'help' => t('The birth date of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
  );
  
  $data['hamster']['image'] = array(
    'title' => t('Image File ID'),
    'help' => t('The image File ID of the hamster.'),
    'field' => array(
      'handler' => 'hamster_views_handler_field_image',
    ),
    'relationship' => array(
      'label' => t('Image'),
      'base' => 'file_managed',
      'base field' => 'fid',
     ),
  );
  
  $data['hamster']['habitat_id'] = array(
    'title' => t('Habitat'),
    'help' => t('The Habitat of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_in_operator',
      'options callback' => 'hamster_views_habitat_options',
    ),
    'relationship' => array(
      'label' => t('Habitat'),
      'base' => 'hamster_habitat',
      'base field' => 'id',
     ),
  );
  
  // Habitat Table
  $data['hamster_habitat']['table'] = array(
    'group' => t("Hamster Habitat"),
    'title' => t("Hamster Habitat Information"),
    'help' => t("Lists information about hamster cages."),
  );
  
  $data['hamster_habitat']['id'] = array(
    'title' => t('ID'),
    'help' => t('The ID of the hamster habitat.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster_habitat']['name'] = array(
    'title' => t('Name'),
    'help' => t('The name of the hamster habitat.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  $data['hamster_habitat']['capacity'] = array(
    'title' => t('Capacity'),
    'help' => t('The capacity of the hamster habitat.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  
  return $data;
}

function hamster_views_gender_options() {
  return array('male' => t('Male'), 'female' => t('Female'));
}

function hamster_views_habitat_options() {
  return db_query("SELECT id, name FROM {hamster_habitat}")->fetchAllKeyed(0);
}
