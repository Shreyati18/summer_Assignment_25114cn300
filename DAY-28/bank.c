#include <stdio.h>

struct BankAccount
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct BankAccount acc;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do
    {
        printf("\n====== BANK ACCOUNT SYSTEM ======\n");
        printf("1. Display Account Details\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n----- Account Details -----\n");
                printf("Account Number : %d\n", acc.accountNo);
                printf("Account Holder : %s\n", acc.name);
                printf("Balance        : %.2f\n", acc.balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    acc.balance += amount;
                    printf("Deposit Successful!\n");
                    printf("Updated Balance: %.2f\n", acc.balance);
                }
                else
                {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= 0)
                {
                    printf("Invalid Amount!\n");
                }
                else if(amount > acc.balance)
                {
                    printf("Insufficient Balance!\n");
                }
                else
                {
                    acc.balance -= amount;
                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance: %.2f\n", acc.balance);
                }
                break;

            case 4:
                printf("Thank you for using the Bank Account System.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}