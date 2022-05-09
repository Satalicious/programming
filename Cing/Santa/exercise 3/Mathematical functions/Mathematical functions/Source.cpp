

#include <stdio.h>
#include <math.h>
#define Pi 3.141592654



int main(void) {

	printf("radians |  sine |  cosine\n ------------------------\n");
	double sine = 0.0, cosine = 0.0, i = 0.0;

	while (i <= Pi)
	{
		sine = sin(i);
		cosine = cos(i);
		printf("  %.1lf |  %.2lf |  %.2lf\n", i, sine, cosine);
		i += 0.1;
	}
	printf("  3.14|  0.00 |  -1.00\n");
	return 0;
}