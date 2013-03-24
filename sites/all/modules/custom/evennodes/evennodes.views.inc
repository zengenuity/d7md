<?php

function evennodes_views_query_alter(&$view, &$query) {
  if ($view->base_table == 'node') {
    $query->add_where_expression(1, 'node.nid % 2 = 0');
  }
}