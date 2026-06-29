#include <stdio.h>

int main()
{
    int totalTickets = 50;
    int bookedTickets = 0;
    int choice, tickets;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. View Available Tickets\n");
        printf("2. Book Tickets\n");
        printf("3. View Booked Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Tickets: %d\n", totalTickets);
                break;

            case 2:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);

                if(tickets <= 0)
                {
                    printf("Invalid number of tickets!\n");
                }
                else if(tickets > totalTickets)
                {
                    printf("Sorry! Only %d ticket(s) available.\n", totalTickets);
                }
                else
                {
                    totalTickets -= tickets;
                    bookedTickets += tickets;
                    printf("%d ticket(s) booked successfully.\n", tickets);
                }
                break;

            case 3:
                printf("Booked Tickets   : %d\n", bookedTickets);
                printf("Remaining Tickets: %d\n", totalTickets);
                break;

            case 4:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}