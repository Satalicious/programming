
#include <stdio.h>

int main() {
    int array[20] = {1,13,12,6,13,6,7,8,8,10,11,12,13,14,15,16,17,18,9,20};
    int cnt = 0;
    for (int i = 0; i < 20; i++) {
        if (array[i] > 9 || array[i] < 1) {
            array[i] = 0;
            printf("%d, ",array[i]);
        } else
            printf("%d, ",array[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (i == array[j])
                cnt+=1;
        } 
        printf("%d: %d\n",i,cnt);
        cnt = 0;
    }
    return 0;
    }
    
    