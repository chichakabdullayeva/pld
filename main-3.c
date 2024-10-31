#include "main.h"
#include <stdio.h>

int main()
{
	int n;

	printf("Enter a year: ");
	scanf("%d", &n);

	is_leap_year(n);
	return 0;
}
