#include <stdio.h>

int main()
{
    int arr[100], n = 0;
    int choice, i;
    int sum, max, min;

    do
    {
        printf("\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Sum\n");
        printf("4. Find Maximum\n");
        printf("5. Find Minimum\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if(n == 0)
                {
                    printf("Array is empty!\n");
                }
                else
                {
                    printf("Array Elements: ");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("Array is empty!\n");
                }
                else
                {
                    sum = 0;
                    for(i = 0; i < n; i++)
                    {
                        sum += arr[i];
                    }
                    printf("Sum = %d\n", sum);
                }
                break;

            case 4:
                if(n == 0)
                {
                    printf("Array is empty!\n");
                }
                else
                {
                    max = arr[0];
                    for(i = 1; i < n; i++)
                    {
                        if(arr[i] > max)
                            max = arr[i];
                    }
                    printf("Maximum Element = %d\n", max);
                }
                break;

            case 5:
                if(n == 0)
                {
                    printf("Array is empty!\n");
                }
                else
                {
                    min = arr[0];
                    for(i = 1; i < n; i++)
                    {
                        if(arr[i] < min)
                            min = arr[i];
                    }
                    printf("Minimum Element = %d\n", min);
                }
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}