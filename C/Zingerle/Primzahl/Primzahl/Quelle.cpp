

#include <stdio.h>

void main()

{
	
	int x=0, y=0, i;
	printf("\n=====================\n     PRIMZAHLTEST\n=====================\n");
	printf("Enter an Integer: ");

	scanf("%d",&x);


	for (i=2; i<x; i++)
	{
		if (x % i == 0)
		{
			y = 0;
			break;
		}

		if (i == x-1)
		{
			y = 1;
			break;
		}
	}
	if (y == 0)
	{
		printf("\n%d ist KEINE PRIMZAHL!!", x);
	}
	if (y == 1)
	{
		printf("\n%d ist EINE PRIMZAHL", x);
	}



}