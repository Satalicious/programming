#include <stdio.h>
#include <string.h>

void remove_spaces(char* s) {
    char* d = s;
    do {
        while (*d == 32) {
            ++d;
        }
    } while (*s++ = *d++);
}

int main() {
    //char text[] = "annna";
    char text[] = "regallager";
    int cnt = 0, textlen = strlen(text);

    for (int i = 0; i < textlen; i++) {
        if (text[i] >= 65 && text[i] <= 90)
            text[i] += 32;
        if (text[i] == 32) {
            char *y = &text[i];
            //remove_spaces(y); 
        }
    }
    printf("\n");

    printf("Text zu ueberpruefen: ");
    for (int j = 0; j < textlen; j++) {
        printf("%c", text[j]);
        if (text[j] == text[textlen-j-1])
            cnt+=1;
    }
    printf("\n");
    printf("cnt: %d\n", cnt);
    printf("textlen: %d\n", textlen);

    if (cnt == textlen)
        printf("Das ist ein Palindrom\n");
    else
        printf("Das ist kein Palindrom\n");
    
    return 0;
}