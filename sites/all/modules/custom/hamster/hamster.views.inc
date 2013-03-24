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
  );
  
  $data['hamster']['name'] = array(
    'title' => t('Name'),
    'help' => t('The name of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );
  
  $data['hamster']['gender'] = array(
    'title' => t('Gender'),
    'help' => t('The gender of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );
  
  $data['hamster']['weight'] = array(
    'title' => t('Weight'),
    'help' => t('The weight of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
    ),
  );
  
  $data['hamster']['birthdate'] = array(
    'title' => t('Birth Date'),
    'help' => t('The birth date of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
    ),
  );
  
  $data['hamster']['image'] = array(
    'title' => t('Image File ID'),
    'help' => t('The image File ID of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );
  
  $data['hamster']['habitat_id'] = array(
    'title' => t('Habitat ID'),
    'help' => t('The image Habitat ID of the hamster.'),
    'field' => array(
      'handler' => 'views_handler_field',
    ),
  );
  
  
  
  return $data;
}