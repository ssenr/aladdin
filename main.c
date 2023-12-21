#include <pcap/pcap.h>
#include <pcap.h>
#include <curl/curl.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool compare_network_dev(char* name, char* err_buf)
{
  pcap_if_t* all_dev;
  pcap_if_t* dev;

  if (pcap_findalldevs(&all_dev, err_buf) == PCAP_ERROR) {
    fprintf(stderr, "Error in pcap_findalldevs(): %s \n", err_buf);
    exit(1);
  }

  bool cond = false;
  for (dev=all_dev; dev != NULL; dev = dev->next) {
    if (strcmp(dev->name, name) == 0) {
      cond = true;
    }
  }
  pcap_freealldevs(all_dev);
  return cond;
}

int main(int argc, char* argv[])
{
  char err_buf[PCAP_ERRBUF_SIZE];
  char* netwrk_dev = argv[1];

  curl_global_init(CURL_GLOBAL_ALL);
  
  if (compare_network_dev(netwrk_dev, err_buf)) {
    //CURL* handler = curl_easy_init(); 
    return 0;
  }
  return 1;
}
