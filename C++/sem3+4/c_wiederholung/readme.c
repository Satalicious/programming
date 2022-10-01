
//https://study.find-santa.eu/exercises/c/exercise_files/

#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;

  fp = fopen("readme.c", "r");

  if (fp == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  do {
    if (feof(fp)) {
      break;
    }
    printf("%c", fgetc(fp));
  } while (1);

  fclose(fp);

  return 0;
}