<?php

function evennodes_views_query_alter(&$view, &$query) {
  if ($view->base_table == 'node') {
    $query->add_where_expression(1, 'node.nid % 2 = 0');
  }
}

function evennodes_views_pre_render(&$view) {
  if ($view->name == 'nodes_list') {
    foreach ($view->result as $i => $r) {
      $view->result[$i]->node_title = 'Title: ' . $r->node_title;
    } 
  }
}

function evennodes_views_post_render(&$view, &$output, &$cache) {
  if ($view->name == 'nodes_list') {
    dpm($output);
    $output = '<div style="background: #ff0">' . $output . '</div>';
  }
}