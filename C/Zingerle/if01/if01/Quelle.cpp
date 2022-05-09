#include <stdio.h>

void main()

{
	int z;

	printf("Zahl: ");
	scanf("%d", &z);


	if (!(z > 10)) //Verzweigung ... if (Bedingung)
	{
		printf("Zahl %d ist groesser als 10\n", z);

	}

	else if (z > 5)
	{
		printf("Zahl %d ist groesser als 5\n", z);
	}

	else if (z < 5)
	{
		printf("Zahl %d ist nicht groesser als 5\n", z);
	}

	else
	{
		printf("Zahl %d ist nicht groesser als 10\n", z);
		if (z > 5)
		{
			printf("Zahl %d ist groesser als 5\n", z);

		}

	}





}






