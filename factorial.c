#include <stdio.h>

void factorial(int n)
{
	int i;
	n = 7;
	int s = 1;
	
	for (i = 1; i <= n; i++)
	{
		s *= i;
	}

	printf("%d\n", s);
}

