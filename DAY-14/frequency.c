#include <stdio.h>

int main() {
    int arr[100], n, key;
    int frequency = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            frequency++;
        }
    }

    printf("Frequency of %d = %d\n", key, frequency);

    return 0;
}