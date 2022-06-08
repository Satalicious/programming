
#include <stdio.h>

int max(const int *array, int dimension)
{
    int length = sizeof(array)/sizeof(int);
    int value = 0;
    printf("length: %d, dimension: %d, sizeofarr: %lu\n", length, dimension,sizeof(array));
    for (int i = 0; i < length; i++) {
        if (*array > value)
        {
            value = *array;
        }
        array++;
    }
    return value;
}

int main()
{
    int arr[100] = {4, 1, 7, 5, 8, 1, 4, 2, 3, 1, 100};
    int length = sizeof(arr)/sizeof(int);
    printf("sizeofarr: %d\n", length);
    printf("highest number is %d\n", max(arr, 11));
    return 0;
}