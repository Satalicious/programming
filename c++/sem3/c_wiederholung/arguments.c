#include <getopt.h> // getopt_long
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_BLUE "\x1b[34m"

int main(int argc, char **argv) {
  int c;
  int is_h = false, is_a = false;
  int is_c = false; // flags
  char *c_arg = 0, *d_arg = 0;
  char color[32];

  int option_index = 0;
  static struct option long_options[] = {
      /*   NAME       ARGUMENT   FLAG  SHORTNAME */
      {"color", required_argument, NULL, 'c'},
      {"help", no_argument, NULL, 'h'},
      {"author", no_argument, NULL, 'a'},
      {NULL, 0, NULL, 0}};

  while ((c = getopt_long(argc, argv, "ahc:", long_options, &option_index)) !=
         -1) {
    switch (c) {
    case 'h':
      is_h = true;
      break;
    case 'a':
      is_a = true;
      break;
    case 'c':
      strcpy(color, optarg);
      is_c = true;
      break;
    default:
      printf("?? getopt returned character code 0%o ??\n", c);
    }
  }

  /* if (optind < argc) {
    printf("non-option ARGV-elements: ");
    while (optind < argc) {
      printf("%s ", argv[optind++]);
    }
    printf("\n");
  } */

  if (is_h) {
    puts("help:");
    puts("-h | --help   show help");
    puts("-a | --author show author name and contact\n");
    puts("-c | --color  print text in given color [red, green, blue] \n");
  }
  if (is_a) {
    puts("Author: Mathias Schuh, mathias.schuh@hotmail.com");
  }
  if (is_c) {
    if (strcmp(color, "red") == 0) {
      printf("\033[0;31m");
    }
    if (strcmp(color, "blue") == 0) {
      printf("\033[0;34m");
    }
    if (strcmp(color, "green") == 0) {
      printf("\033[0;32m");
    }
    printf("color: %s", color);

    if (optind < argc) {
      printf("\ntext: ");
      while (optind < argc) {
        printf("%s ", argv[optind++]);
      }
    }
    printf("\033[0m\n");
  }

  return 0;
}