<?php

function evennodes_views_query_alter(&$view, &$query) {
  dpm($view);
  
  if ($view->base_table == 'node') {
    $query->add_where(1, 'node.nid', 20);
  }
  dpm($query);
}