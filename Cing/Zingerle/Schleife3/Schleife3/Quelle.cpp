
#include <stdio.h>

void main()

{
	float C=0;
	int F=0;

	while (F <= 150)
	{
		F += 20;
		printf("Fahrenheit:	%d\n", F);
		printf("Celsius:");
		C = (5.0 / 9) * (F - 32.0);
		printf("	%.1f\n", C);

	} 














}