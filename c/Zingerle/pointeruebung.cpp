

#include <stdio.h>
#include <string.h>


void berechne(int zahlen[], int *min, int *max, int *summ, double *mw){

    int tmp = 0;
    *min = *max = zahlen[0];

    for (int i = 0; i < 10; i++){
        if (zahlen[i] < *min)
            *min = zahlen[i];
        if (zahlen[i] > *max)
            *max = zahlen[i];

        *summ+=zahlen[i];
    }
    *mw = *summ/10.0;

    for (int i = 0; i < 10; i++){
        if (zahlen[i] > zahlen[i+1])
        tmp = zahlen[i];
        zahlen[i] = zahlen[i+1];
        zahlen[i+1] = tmp;
    }    
}


int main() {
    int zahlen[10] = {11,2,30,49,589,62,7,84,91,10}, min = 0, max = 0, summ = 0;
    double mw = 0;
    berechne(zahlen, &min, &max, &summ, &mw);
    printf("min: %d, max: %d, summ: %d, mw: %lf", min, max, summ, mw);
    for (int i = 0; i < 10; i++){
        printf("%d. Zahl: %d\n",i+1,zahlen[i]);
    }
    return 0;
}