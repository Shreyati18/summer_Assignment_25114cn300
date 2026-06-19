#include <stdio.h>

int main() {
    int a[10][10], n;
    int diagonalSum = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        diagonalSum += a[i][i];
    }

    printf("Sum of diagonal elements = %d\n", diagonalSum);

    return 0;
}