

#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int max(int arr[], int dimension) {
    {
    int i, j;
    for (i = 0; i < dimension - 1; i++)
       for (j = 0; j < dimension - i - 1; j++)
           if (arr[j] > arr[j + 1])
              swap(&arr[j], &arr[j + 1]);
    }
    return arr[dimension - 1];
}


void main(void) {
	int arr[100] = { 4, 1, 7, 5, 8, 1, 4, 2, 3, 1, 100 };

	printf("highest number is %d", max(arr,3));
}