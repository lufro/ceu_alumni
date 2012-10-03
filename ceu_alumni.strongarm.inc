<?php
/**
 * @file
 * ceu_alumni.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ceu_alumni_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_profile_alumni';
  $strongarm->value = array();
  $export['menu_options_profile_alumni'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_profile_alumni';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_profile_alumni'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_profile_alumni';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_profile_alumni'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_profile_alumni';
  $strongarm->value = '1';
  $export['node_preview_profile_alumni'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_profile_alumni';
  $strongarm->value = 0;
  $export['node_submitted_profile_alumni'] = $strongarm;

  return $export;
}
