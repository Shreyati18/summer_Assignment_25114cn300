#include <stdio.h>

int main()
{
    int rollNo[100], marks[100], n, i;
    char name[100][50];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &rollNo[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n========== Student Records ==========\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-10s\t%d\n",
               rollNo[i],
               name[i],
               marks[i]);
    }

    return 0;
}