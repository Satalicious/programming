#include <stdio.h>

/*
	author:	zi
	usage:	Modulo
	date:	2021-11-22
*/


void main()
{
	int z1, z2, erg;

	printf("==============\nRechner\n==============\n\n");
	printf("Zahl 1: ");
	scanf("%d", &z1);
	printf("Zahl 2: ");
	scanf("%d", &z2);

	// Ganzahlige Division
	erg = z1 / z2;  
	printf("Division: %d / %d = %d", z1, z2, erg);
	erg = z1 % z2;		//%....(Modulo)....Rest eine gazzahligen Divison
	printf(" und %d  Rest", erg);

}