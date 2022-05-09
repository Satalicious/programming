


#include <stdio.h>
#include <conio.h>

#define MAX 25



void main() 
{
	char monate[12][MAX] = { "Jännger", "Februar", "März", "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November", "Dezember" };

	printf("%s\n", monate[3]);
	printf("%c\n", monate[7][2]);

	for (int i = 0; monate[7][i] != '\0';i++)
		printf("%c", monate[7][i]);

	for (int j = 0; j < 12; j++)
	{
		printf("\n");
		for (int i = 0; monate[j][i] != '\0'; i++)
			printf("%c", monate[j][i]);
	}
	printf("==============\n");
	int x = 0;
	
	printf("Monat: ");
	scanf("%d",&x);
	printf("%d. Monat ist %s",x, monate[x-1]);
	
}
