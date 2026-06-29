#include <stdio.h>

int main()
{
    int rollNo;
    char name[50];
    int m1, m2, m3, m4, m5, total;
    float percentage;
    char grade;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Student Name: %s\n", name);
    printf("-------------------------------\n");
    printf("Subject 1 : %d\n", m1);
    printf("Subject 2 : %d\n", m2);
    printf("Subject 3 : %d\n", m3);
    printf("Subject 4 : %d\n", m4);
    printf("Subject 5 : %d\n", m5);
    printf("-------------------------------\n");
    printf("Total      : %d\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    if (grade == 'F')
        printf("Result     : Fail\n");
    else
        printf("Result     : Pass\n");

    return 0;
}