#include <stdio.h>
#include "main.h"

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    prime_numbers(n);

    return 0;

   }
