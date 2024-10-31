#include <stdio.h>

void is_palindrome(int num)
{
	int reversed, remainder, original;
	original = num;

	while (num != 0)
	{
		remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num /= 10;
	}

	if (original == reversed)
	{
		printf("This is a palindrome\n");
	}
	else
	{
		printf("This isn't a palindrome\n");
	}

}
