#include <stdio.h>
#include <string.h>

int main()
{
    int bookId[100], n, i, searchId, found = 0;
    char title[100][50], author[100][50];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Book Title: ");
        scanf("%s", title[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\n========== Library Books ==========\n");
    printf("ID\tTitle\t\tAuthor\n");
    printf("----------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-12s\t%s\n",
               bookId[i],
               title[i],
               author[i]);
    }

    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);

    found = 0;

    for(i = 0; i < n; i++)
    {
        if(bookId[i] == searchId)
        {
            printf("\nBook Found!\n");
            printf("Book ID : %d\n", bookId[i]);
            printf("Title   : %s\n", title[i]);
            printf("Author  : %s\n", author[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Book not found!\n");
    }

    return 0;
}