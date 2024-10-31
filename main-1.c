#include "main.h"
#include <stdio.h>
/**
 * Main - entry point
*
* @num: a variable
* Return: Always 0
*/

int main(void)
{
        int num;
        printf("Enter a number to check if its a palindrome: ");
        scanf("%d", &num);
        is_palindrome(num);
	return 0;
}
