#include <stdio.h>
#include <string.h>

struct Ticket
{
    int seatNo;
    char name[30];
    int booked;
};

int main(){
    //create ticket booking system
    struct Ticket ticket[10];
    int i, choice, seat;

    // Initialize seats
    for(i = 0; i < 10; i++)
    {
    ticket[i].seatNo = i + 1;
        ticket[i].booked = 0;
        strcpy(ticket[i].name, "");
    }

    while(1)
    {
        printf("\n========== Ticket Booking System ==========\n");
        printf("1. View Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nSeat Status\n");

            for(i = 0; i < 10; i++)
            {
                if(ticket[i].booked == 0)
                 {
                    printf("Seat %d : Available\n", ticket[i].seatNo);
                }
                else
                {
                    printf("Seat %d : Booked by %s\n",
                           ticket[i].seatNo,
                           ticket[i].name);
                }
            }
        }

        else if(choice == 2)
        {
            printf("Enter Seat Number (1-10): ");
            scanf("%d", &seat);

            if(seat < 1 || seat > 10)
            {
                printf("Invalid Seat Number!\n");
            }
            else if(ticket[seat - 1].booked == 1)
            {
                printf("Seat Already Booked!\n");
            }
            else
            {
                printf("Enter Customer Name: ");
                scanf("%s", ticket[seat - 1].name);

                ticket[seat - 1].booked = 1;

                printf("Ticket Booked Successfully!\n");
            }
        }

        else if(choice == 3)
        {
            printf("Enter Seat Number: ");
            scanf("%d", &seat);

            if(seat < 1 || seat > 10)
            {
                printf("Invalid Seat Number!\n");
            }
             else if(ticket[seat - 1].booked == 0)
            {
                printf("Seat is Already Available!\n");
            }
            else
            {
                ticket[seat - 1].booked = 0;
                strcpy(ticket[seat - 1].name, "");

                printf("Ticket Cancelled Successfully!\n");
            }
        }

        else if(choice == 4)
        {
            printf("Thank You!\n");
            break;
        }

        else
        {
            printf("Invalid Choice!\n");
            }
    }

    return 0 ;
}