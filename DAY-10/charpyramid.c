#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        } 
        
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }

        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}