#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome String\n");

    return 0;
}