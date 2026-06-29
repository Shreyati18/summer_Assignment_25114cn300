#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book book[100];
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Book Title: ");
        scanf("%s", book[i].title);

        printf("Author Name: ");
        scanf("%s", book[i].author);

        printf("Price: ");
        scanf("%f", &book[i].price);
    }

    printf("\n========== Library Records ==========\n");
    printf("ID\tTitle\t\tAuthor\t\tPrice\n");
    printf("-------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-10s\t%-10s\t%.2f\n",
               book[i].bookId,
               book[i].title,
               book[i].author,
               book[i].price);
    }

    return 0;
}