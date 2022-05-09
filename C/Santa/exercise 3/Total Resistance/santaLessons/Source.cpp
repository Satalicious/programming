
#include <stdio.h>

/*
https://bulme.find-santa.eu/exercises/c/exercise_3/
The program should use (at least) two separate functions.

One function that deals with user input. It should ask the user to enter the number of
parallel resistors of the circuit and then ask for the resistance of each resistor using a for loop.
The other function should take an array of resistances and the length of this array as
input and return the total resistance.

The total resistance can be calculated with this formula:
	*/

double formula(double* resistance, int n);
int askuser(double* resistance);


double formula(double* resistance, int n)
{
	double totalres = 0;
	double result = 0;
	

	for (int i = 0; i < n; i++) {
		totalres += 1.0 / resistance[i];
	}
	
	result = 1 / totalres;
	
	return result;
}

int askuser(double* resistance)
{
	int n;

	printf("Enter the amount of parallel resistors of the circuit: ");
	scanf("%d", &n);
	printf("Enter the resistance for each resistor <SPACE SEPPERATED>: ");
	
	for (int i = 0; i < n; i++) {
		scanf("%lf", &resistance[i]);

	}
	return n;
}


void main(void)
{
	double resistance[100];

	int n = askuser(resistance);
	//double result = formula(resistance, n);

	printf("Total resistance is %.2lf", formula(resistance, n));
}
