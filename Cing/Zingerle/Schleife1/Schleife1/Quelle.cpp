
#include <stdio.h>
void main() 
{
	int zahl;

	printf("Enter a number to count up to 100.000: ");
	scanf("%d", &zahl);

	while (zahl < 100000)
	{
		printf("%d \n", zahl);
		zahl += 1;
	}

printf("%d = 100000, JUHU!", zahl);









}