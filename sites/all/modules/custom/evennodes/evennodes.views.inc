<?php

function evennodes_views_query_alter(&$view, &$query) {
  dpm($view);
  
  if ($view->base_table == 'node') {
    $query->add_where_expression(1, 'node.nid % 2 = 0');
  }
  
  dpm($query);
}

function evennodes_views_pre_render(&$view) {
 
  if ($view->name == 'node_list') {
    foreach ($view->result as $i => $r) {
      $view->result[$i]->node_title = 'Title: ' . $r->node_title;
    }
  }
   dpm($view->result);
}

function evennodes_views_post_render(&$view, &$output, &$cache) {
  if ($view->name == 'node_list') {
    
    $output = '<div style="background: #ff0">' . $output . '</div>';
    dpm($output);
  }
}