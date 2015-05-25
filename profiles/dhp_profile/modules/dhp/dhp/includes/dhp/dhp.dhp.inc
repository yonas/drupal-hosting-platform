<?php

/**
 * Implements hook_dhp_plugins().
 */
function dhp_dhp_plugins() {
    return array(
        'status' => array(
            'dhp_status_updown' => array(
                'title' => 'Up/Down status',
                'description' => 'Indicates whether a site is up or down.',
                'version' => 1,
                'path' => drupal_get_path('module', 'dhp') . '/includes/dhp/plugins',
                'theme' => 'dhp_plugin_theme_status',
                'theme path' => drupal_get_path('module', 'dhp') . '/plugins/status',
            ),
        ),
    );
}
