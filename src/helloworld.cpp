#include<iostream>
#include<curl/curl.h>
 
int main(int argc, char *argv[]) {
  CURL* curl;
  curl = curl_easy_init();
  curl_easy_cleanup(curl);

  std::cout << "Hello World!" << std::endl;
  return 0;
}
