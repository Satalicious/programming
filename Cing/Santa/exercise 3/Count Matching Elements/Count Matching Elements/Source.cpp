

#include <stdio.h>



int countNumInArray(int array[], int dimension, int number) {
	int count = 0;
	for (int i = 0; i < dimension; i++) {
		if (array[i] == number)
			count += 1;
	}
	return count;
}

void main(void)
{
	int array[] = { 4, 1, 7, 5, 4, 1, 4, 3, 7, 4 }, dimension, number;
	printf("occurences: %d", countNumInArray(array,9,4));
}