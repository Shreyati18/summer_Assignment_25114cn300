#include <stdio.h>

int main() {
    int arr[100], n, sum;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the required sum: ");
    scanf("%d", &sum);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: %d + %d = %d\n",
                       arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("No pair found.\n");
    }

    return 0;
}