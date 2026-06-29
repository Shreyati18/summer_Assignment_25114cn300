#include <stdio.h>

#define MAX 100

int rollNo[MAX], marks[MAX], n;
char name[MAX][50];

void addStudents()
{
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &rollNo[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("No records available!\n");
        return;
    }

    printf("\n========== STUDENT RECORDS ==========\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-10s\t%d\n", rollNo[i], name[i], marks[i]);
    }
}

void searchStudent()
{
    int id, i, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(rollNo[i] == id)
        {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", rollNo[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student not found!\n");
    }
}

void averageMarks()
{
    int i, sum = 0;

    if(n == 0)
    {
        printf("No records available!\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        sum += marks[i];
    }

    printf("Average Marks = %.2f\n", (float)sum / n);
}

int main()
{
    int choice;

    do
    {
        printf("\n========== STUDENT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student\n");
        printf("4. Calculate Average Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                averageMarks();
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