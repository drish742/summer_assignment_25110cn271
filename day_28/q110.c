#include <stdio.h>
#include <string.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main(){
    //creating bank account system
     struct Bank customer[100];

    int count = 0;
    int choice;
    int acc;
    float amount;
    int i, found;

    do
    {
        printf("\n========== BANK MANAGEMENT SYSTEM ==========\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:
         printf("\nEnter Account Number : ");
            scanf("%d",&customer[count].accNo);

            printf("Enter Name : ");
            scanf(" %[^\n]",customer[count].name);

            printf("Enter Initial Deposit : ");
            scanf("%f",&customer[count].balance);

            count++;

            printf("\nAccount Created Successfully.\n");
            break;

        case 2:

            printf("\nEnter Account Number : ");
            scanf("%d",&acc);

            found=0;

            for(i=0;i<count;i++)
            {
                if(customer[i].accNo==acc)
                {
                    printf("Enter Deposit Amount : ");
                    scanf("%f",&amount);

                    customer[i].balance += amount;

                    printf("Deposit Successful.\n");

                    found=1;
                    break;
                }
            }

            if(found==0)
            {
                printf("Account Not Found.\n");
            }

            break;

        case 3:

            printf("\nEnter Account Number : ");
            scanf("%d",&acc);

            found=0;
            for(i=0;i<count;i++)
            {
                if(customer[i].accNo==acc)
                {
                    printf("Enter Withdrawal Amount : ");
                    scanf("%f",&amount);

                    if(customer[i].balance>=amount)
                    {
                        customer[i].balance -= amount;
                        printf("Withdrawal Successful.\n");
                    }
                    else
                    {
                        printf("Insufficient Balance.\n");
                    }

                    found=1;
                    break;
                }
            }

            if(found==0)
            {
                printf("Account Not Found.\n");
            }
             break;

        case 4:

            printf("\nEnter Account Number : ");
            scanf("%d",&acc);

            found=0;

            for(i=0;i<count;i++)
            {
                if(customer[i].accNo==acc)
                {
                    printf("\n------ ACCOUNT DETAILS ------\n");
                    printf("Account Number : %d\n",customer[i].accNo);
                    printf("Name           : %s\n",customer[i].name);
                    printf("Balance        : %.2f\n",customer[i].balance);

                    found=1;
                    break;
                }
            }

            if(found==0)
            {
                printf("Account Not Found.\n");
                }

            break;

        case 5:

            if(count==0)
            {
                printf("\nNo Accounts Available.\n");
            }
            else
            {
                printf("\n========== ACCOUNT LIST ==========\n");

                for(i=0;i<count;i++)
                {
                    printf("\nAccount %d\n",i+1);
                    printf("Account Number : %d\n",customer[i].accNo);
                    printf("Name           : %s\n",customer[i].name);
                    printf("Balance        : %.2f\n",customer[i].balance);
                }
            }

            break;

        case 6:
         printf("\nThank You for Using Bank Management System.\n");
            break;

        default:

            printf("\nInvalid Choice.\n");

        }

    }while(choice!=6);
    
    return 0 ;
}