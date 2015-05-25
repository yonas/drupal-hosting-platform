<?php

function dhp_admin() {
    $form = array();
    return $form;
}

function dhp_admin_plugins() {
    $form = array();

    dhp_get_module_apis('dhp');
    dhp_module_include('dhp');
    $plugin_groups = dhp_discover_plugins();

    foreach ($plugin_groups as $type => $plugins) {
        $form['plugins_' . $type] = array(
            '#type' => 'fieldset',
            '#title' => ucfirst($type) . ' plugins',
            '#collapsible' => true,
            '#collapsed' => false,
        );

        $options = array();
        foreach ($plugins as $plugin) {
            $options[$plugin['name']] = '<b>' . $plugin['title'] . '</b>: ' . $plugin['description'];
        }

        $form['plugins_' . $type]['dhp_plugin_status_' . $type] = array(
            '#type' => 'checkboxes',
            '#title' => 'Enable',
            '#options' => $options,
            '#default_value' => variable_get('dhp_plugin_status_' . $type, array_keys($options)),
        );
    }

    return system_settings_form($form);
}
