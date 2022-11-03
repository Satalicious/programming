#include <stdio.h>
#include <curl/curl.h>
size_t write_response(void *ptr, size_t size, size_t nmemb, void *data) {
  FILE* f = (FILE *) data;
  puts("\033[32mwriting received data to `result.html`\033[0m");
  return fwrite(ptr, size, nmemb, f);
}
int main(void) {
  CURL* curl;
  CURLcode res;
  FILE* body;
  body = fopen("result.html", "wb");
  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://study.find-santa.eu/");
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, body);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_response);
    res = curl_easy_perform(curl);
    if(res != CURLE_OK)  // check of errors
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));
    curl_easy_cleanup(curl);
  }
  fclose(body);
  return 0;
}
