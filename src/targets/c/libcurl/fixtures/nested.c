CURL *hnd = curl_easy_init();

curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "GET");
curl_easy_setopt(hnd, CURLOPT_URL, "http://mockbin.com/har?foo[bar]=baz,zap&fiz=buz&key=value");

CURLcode ret = curl_easy_perform(hnd);