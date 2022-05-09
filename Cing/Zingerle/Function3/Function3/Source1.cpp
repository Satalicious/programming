
#include <stdio.h>

void hallo()
{
	printf("Hello!!!!!!!!!!!\n");
}

void hallo(int z)
{
	for (int i = 0; i < z; i++)
		printf("Hello\n");
}

int summe(int x, int y)
{
	int sum = x + y;
	printf("%d + %d = %d", x, y, sum);
	return sum;
}