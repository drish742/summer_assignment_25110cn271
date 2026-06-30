#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    float price;
    int quantity;
};

int main(){
    //craeating a library management system

    struct Book library[100];
    int count = 0;
    int choice, i, searchId;
    int found;

    do
    {
        printf("\n====== LIBRARY MANAGEMENT SYSTEM ======\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:
         printf("\nBook ID: ");
            scanf("%d",&library[count].id);

            printf("Book Name: ");
            scanf(" %[^\n]",library[count].name);

            printf("Author Name: ");
            scanf(" %[^\n]",library[count].author);

            printf("Price: ");
            scanf("%f",&library[count].price);

            printf("Quantity: ");
            scanf("%d",&library[count].quantity);

            count++;

            printf("\nBook Added Successfully!\n");

            break;
             case 2:

            if(count==0)
            {
                printf("\nNo Books Available.\n");
            }
            else
            {
                printf("\n----- BOOK LIST -----\n");

                for(i=0;i<count;i++)
                {
                    printf("\nBook %d\n",i+1);
                    printf("ID : %d\n",library[i].id);
                    printf("Name : %s\n",library[i].name);
                    printf("Author : %s\n",library[i].author);
                    printf("Price : %.2f\n",library[i].price);
                    printf("Quantity : %d\n",library[i].quantity);
                }
            }

            break;

        case 3:

            found=0;
            printf("\nEnter Book ID: ");
            scanf("%d",&searchId);

            for(i=0;i<count;i++)
            {
                if(library[i].id==searchId)
                {
                    printf("\nBook Found\n");
                    printf("Name : %s\n",library[i].name);
                    printf("Author : %s\n",library[i].author);
                    printf("Price : %.2f\n",library[i].price);
                    printf("Quantity : %d\n",library[i].quantity);

                    found=1;
                    break;
                }
            }

            if(found==0)
                printf("\nBook Not Found.\n");

            break;

        case 4:

            found=0;
            printf("\nEnter Book ID to Issue: ");
            scanf("%d",&searchId);

            for(i=0;i<count;i++)
            {
                if(library[i].id==searchId)
                {
                    found=1;

                    if(library[i].quantity>0)
                    {
                        library[i].quantity--;
                        printf("\nBook Issued Successfully!\n");
                    }
                    else
                    {
                        printf("\nBook Out of Stock.\n");
                    }

                    break;
                }
            }

            if(found==0)
                printf("\nBook Not Found.\n");
                 break;

        case 5:

            found=0;

            printf("\nEnter Book ID to Return: ");
            scanf("%d",&searchId);

            for(i=0;i<count;i++)
            {
                if(library[i].id==searchId)
                {
                    library[i].quantity++;
                    found=1;

                    printf("\nBook Returned Successfully!\n");

                    break;
                }
            }

            if(found==0)
                printf("\nBook Not Found.\n");

            break;
            case 6:

            printf("\nThank You!\n");

            break;

        default:

            printf("\nInvalid Choice.\n");

        }

    }while(choice!=6);
    

    return 0 ;
}