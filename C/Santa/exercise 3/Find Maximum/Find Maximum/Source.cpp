
#include <stdio.h>

int max(const int *array, int dimension)
{
    int value = 0;
    while (dimension--)
    {
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

    printf("highest number is %d\n", max(arr, 10));
    return 0;
}