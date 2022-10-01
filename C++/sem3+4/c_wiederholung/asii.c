//https://study.find-santa.eu/exercises/c/exercise_files/

#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
  char c;

  fp = fopen("readme.c", "r");

  if (fp == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  do {
    c = fgetc(fp);
    if (feof(fp)) {
      break;
    }
    printf("ASCII value of %c = %d\n", c, c);
  } while (1);

  fclose(fp);

  return 0;
}
