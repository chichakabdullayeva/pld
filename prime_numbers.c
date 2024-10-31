#include <stdio.h>
#include "main.h"

void prime_numbers(int n) {
    if (n < 2) {
        printf("No prime numbers up to %d.\n", n);
        return;
    }

    printf("Prime numbers up to %d are:\n", n);
    for (int num = 2; num <= n; num++) {
        int is_prime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d\n", num);
        }
    }
    printf("\n");
}
