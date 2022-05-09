

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int askuser(){
    int inp = 0;
    printf("Geben Sie eine Zahl zwischen 1 - 20 ein: ");
    scanf("%d",&inp);
    return inp;
}

int main() {
    srand ((long)time(NULL));
    int MyNr = rand() % 20 +1;  // Zufallszahl zwischen 1-20
    int inp = -1, cnt = 0;
    while (inp != MyNr) {
        inp = askuser();
        if (inp < MyNr) printf("%d ist ZU KLEIN, try again\n",inp);
        if (inp > MyNr) printf("%d ist ZU GROSS, try again\n",inp);
        cnt++;
    }
    printf("GEWONNEN JUHUUUUUUUUUUUUUUU\n");
    printf("DU hast %d Versuche gebraucht.\n",cnt);
    return 0;
}