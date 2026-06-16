#include <stdio.h>

int main() {
    int num, i, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    i = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (i == reverse)
        printf("%d is a palindrome number.\n", i);
    else
        printf("%d is not a palindrome number.\n", i);

    return 0;
}