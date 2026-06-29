#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contact[100];
    int n, i;

    printf("Enter the number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Contact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", contact[i].name);

        printf("Phone Number: ");
        scanf("%s", contact[i].phone);

        printf("Email: ");
        scanf("%s", contact[i].email);
    }

    printf("\n========== Contact List ==========\n");
    printf("Name\t\tPhone\t\tEmail\n");
    printf("---------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%-10s\t%-12s\t%s\n",
               contact[i].name,
               contact[i].phone,
               contact[i].email);
    }

    return 0;
}