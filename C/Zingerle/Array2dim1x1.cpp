
#include <stdio.h>


int main()
{
    int matrix[10][10], i, j;
    
    for (int i = 0; i < 10; i++){
        printf("\n");
        for (int j=0; j < 10; j++){
            matrix[i][j] = (i+1) * (j+1);
            printf("%5.d", matrix[i][j]);
        }
    }
    return 0;
}