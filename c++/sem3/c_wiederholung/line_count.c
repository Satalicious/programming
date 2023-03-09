//https://study.find-santa.eu/exercises/c/exercise_files/

#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *fp;
  int linecnt;
  char string[100];
  char c;

  fp = fopen("line_count.c", "r");

  do {
    fgets(string, 100,fp);
    if (feof(fp)) {
      break;
    }
    linecnt++;
  } while (1);
  printf("number of lines: %d\n", linecnt);

  fclose(fp);
  return 0;
}