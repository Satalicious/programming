#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    printf("Satz: ");
    fgets(text,100,stdin);
    printf("entered: %s\n",text);

    for (int i=0; i < strlen(text)-1; i++) {
        if (text[i] == 32) {
            printf("space found\n");
            for (int j=i+1; text[j] == 32; j++)
                printf("%c",text[j]);
        }
    }

    return 0;
}