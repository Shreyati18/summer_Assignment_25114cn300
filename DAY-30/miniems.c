#include <stdio.h>

int main()
{
    int empId[100], salary[100];
    char name[100][50];
    int n, i, searchId, found = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Employee Name: ");
        scanf("%s", name[i]);

        printf("Salary: ");
        scanf("%d", &salary[i]);
    }
    printf("\n========== Employee Records ==========\n");
    printf("ID\tName\t\tSalary\n");
    printf("--------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-10s\t%d\n",
               empId[i],
               name[i],
               salary[i]);
    }

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchId);

    found = 0;

    for(i = 0; i < n; i++)
    {
        if(empId[i] == searchId)
        {
            printf("\nEmployee Found!\n");
            printf("Employee ID   : %d\n", empId[i]);
            printf("Employee Name : %s\n", name[i]);
            printf("Salary        : %d\n", salary[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Employee not found!\n");
    }

    return 0;
}