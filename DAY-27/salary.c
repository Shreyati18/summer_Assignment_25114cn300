#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float netSalary;
};

int main()
{
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    emp.hra = 0.20 * emp.basicSalary;
    emp.da = 0.10 * emp.basicSalary;
    emp.netSalary = emp.basicSalary + emp.hra + emp.da;

    printf("\n===== Salary Details =====\n");
    printf("Employee ID   : %d\n", emp.empId);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basicSalary);
    printf("HRA (20%%)     : %.2f\n", emp.hra);
    printf("DA (10%%)      : %.2f\n", emp.da);
    printf("Net Salary    : %.2f\n", emp.netSalary);

    return 0;
}