#include <stdio.h>

int main() {
    int n, i, j, largestPrimeFactor = 0, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors: ");

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);

            if (i > 1) {
                isPrime = 1;

                for (j = 2; j <= i / 2; j++) {
                    if (i % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }

                if (isPrime)
                    largestPrimeFactor = i;
            }
        }
    }

    printf("\nLargest Prime Factor = %d\n", largestPrimeFactor);

    return 0;
}