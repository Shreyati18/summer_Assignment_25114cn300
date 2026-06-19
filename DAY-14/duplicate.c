#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 0) {
            printf("%d\n", arr[i]);

            for (int k = i + 1; k < n; k++) {
                if (arr[i] == arr[k]) {
                    arr[k] = -1;
                }
            }
        }
    }

    return 0;
}