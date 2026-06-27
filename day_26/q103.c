#include <stdio.h>
int main(){
    //creaint ATM simulation
    int choice;
    float balance = 10000.0, deposit, withdraw;

    while (1)
    {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==============================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Current Balance: Rs. %.2f\n", balance);
        }
        else if (choice == 2)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);

            if (deposit > 0)
            {
                balance = balance + deposit;
                printf("Deposit Successful!\n");
                printf("Updated Balance: Rs. %.2f\n", balance);
            }
            else
            {
                printf("Invalid deposit amount!\n");
            }
        }
        else if (choice == 3)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &withdraw);

            if (withdraw <= 0)
            {
                printf("Invalid withdrawal amount!\n");
            }
            else if (withdraw > balance)
            {
                printf("Insufficient Balance!\n");
            }
            else
            {
                balance = balance - withdraw;
                printf("Please collect your cash.\n");
                printf("Remaining Balance: Rs. %.2f\n", balance);
            }
        }
        else if (choice == 4)
        {
            printf("Thank you for using the ATM!\n");
            break;
        }
        else
        {
            printf("Invalid Choice! Please try again.\n");
        }
    }
    return 0 ;
}