#include <pcap/pcap.h>
#include <pcap.h>
#include <curl/curl.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool compare_network_dev(char* name, char* err_buf)
{
  pcap_if_t* all_dev;
  pcap_if_t* dev;

  if (pcap_findalldevs(&all_dev, err_buf) == PCAP_ERROR) {
    fprintf(stderr, "Error in pcap_findalldevs(): %s \n", err_buf);
    exit(1);
  }

  for (dev=all_dev; dev != NULL; dev = dev->next) {
    printf("%s \n", dev->name);
    if ((dev->name) == name) {
      return true;
    }
  }
  pcap_freealldevs(all_dev);
  return false;
}

int main(int argc, char* argv[])
{
  char err_buf[PCAP_ERRBUF_SIZE];
  char* netwrk_dev = argv[1];
  
  if (compare_network_dev(netwrk_dev, err_buf)) {
    printf("Success");
    return 0;
  }
  return 1;
}
