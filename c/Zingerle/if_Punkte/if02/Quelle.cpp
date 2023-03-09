
#include <stdio.h>

void main()

{
	int z;
	printf("Punkte (maximal 100): ");

	scanf("%d", &z);


	if (z >= 90)
	{
		printf("sehr gut");
	}


	else if (z >= 80)
	{
		printf("gut");
	}

	else if (z >= 65)
	{
		printf("befriedigend");
	}

	else if (z >= 50)
	{
		printf("genuegend");
	}

	else
	{
		printf("nicht genuegend");
	}
		


}


