<?php

/**
 * @file
 * GovCMS update helper functions.
 */

 use Drupal\Core\Extension\ExtensionLifecycle;

/**
 * Implements hook_update_last_removed().
 */
function govcms_update_last_removed() {
  return 10009;
}
