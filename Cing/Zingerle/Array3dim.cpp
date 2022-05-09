

#include <stdio.h>

int main(void) {
    int a[3][3] = { {4,2,1},{3,7,8}, {1,12,5} }, b[3][3] = { {1,3,7},{8,4,12},{18,5,23} }, skalarprod = 0;
    
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            skalarprod += a[i][j] * b[i][j];
        }
    }
    printf("Ergebnis: %d\n", skalarprod);
    return 0;
}