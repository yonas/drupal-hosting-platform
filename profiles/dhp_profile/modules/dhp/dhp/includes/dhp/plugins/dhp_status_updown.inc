<?php

class dhp_status_updown extends dhp_status_plugin {
    public function get_status($site) {
        $subdomain = $site->field_site_url[$site->language][0]['value'];
        // TODO: make this global
        // convert short name to FQDN.
        $url = 'http://drupal.' . $subdomain . '.dev3/';

        try {
            return $this->is_up($url) ? 'up' : 'down';
        } catch (Exception $e) {
            return $e->getMessage();
        }

        return 'up';
    }

    protected function is_up($url) {
        if (!filter_var($url, FILTER_VALIDATE_URL) || !in_array(parse_url($url, PHP_URL_SCHEME), array('http', 'https'))) {
            throw new Exception('Invalid URL');
        }

        if (!function_exists('curl_init')) {
            throw new Exception('CURL extension must be enabled.');
        }

        $cl = curl_init($url);
        curl_setopt($cl, CURLOPT_CONNECTTIMEOUT, 10);
        curl_setopt($cl, CURLOPT_HEADER, true);
        curl_setopt($cl, CURLOPT_NOBODY, true);
        curl_setopt($cl, CURLOPT_RETURNTRANSFER, true);

        $response = curl_exec($cl);
        curl_close($cl);

        return (strpos($response, 'X-Generator: Drupal') !== false) ? true : false;
    }
}
