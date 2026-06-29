#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], temp[100];
    int choice, i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n===== MENU-DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length of the string = %lu\n", strlen(str));
                break;

            case 2:
                strcpy(temp, str);
                length = strlen(temp);

                for(i = 0; i < length / 2; i++)
                {
                    char ch = temp[i];
                    temp[i] = temp[length - i - 1];
                    temp[length - i - 1] = ch;
                }

                printf("Reversed String = %s\n", temp);
                break;

            case 3:
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    temp[i] = toupper(temp[i]);
                }

                printf("Uppercase String = %s\n", temp);
                break;

            case 4:
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    temp[i] = tolower(temp[i]);
                }

                printf("Lowercase String = %s\n", temp);
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}