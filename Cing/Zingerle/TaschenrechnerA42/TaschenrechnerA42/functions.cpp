
#include <stdio.h>


void addition(double z1, double z2)
{
	printf("%.2lf + %.2lf = %.3lf", z1, z2, z1 + z2);
}

void substraction(double z1, double z2)
{
	printf("%.2lf - %.2lf = %.3lf", z1, z2, z1 - z2);
}

void multiplication(double z1, double z2)
{
	printf("%.2lf * %.2lf = %.3lf", z1, z2, z1 * z2);
}

void division(double z1, double z2)
{
	printf("%.2lf / %.2lf = %.3lf", z1, z2, z1 / z2);
}