
#include <stdio.h>

int main()

{
	int limit;
	int start=1;

	printf("Enter a limit:");
	scanf("%d", &limit);

	while (start <= limit)
	{
		printf("%d, ", start);
		start += 2;
		/*if (start == limit)
			printf("%d", limit);*/


	}
return 0;
}