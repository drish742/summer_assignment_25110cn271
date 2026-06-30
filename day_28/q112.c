#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main(){
    //create contact management system
    struct Contact contacts[100];
    int count = 0;
    int choice, i;
    char searchName[50];

    do
    {
        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:

            printf("\nEnter Name: ");
            scanf(" %[^\n]", contacts[count].name);

            printf("Enter Phone: ");
            scanf("%s", contacts[count].phone);

            printf("Enter Email: ");
            scanf("%s", contacts[count].email);

            count++;

            printf("\nContact Added Successfully!\n");

            break;

        case 2:

            if(count==0)
            {
                printf("\nNo Contacts Available.\n");
            }
            else
            {
                printf("\n------ Contact List ------\n");

                for(i=0;i<count;i++)
                {
                    printf("\nContact %d\n",i+1);
                    printf("Name  : %s\n",contacts[i].name);
                    printf("Phone : %s\n",contacts[i].phone);
                    printf("Email : %s\n",contacts[i].email);
                }
            }

            break;

        case 3:

            printf("\nEnter Name to Search: ");
            scanf(" %[^\n]",searchName);

            for(i=0;i<count;i++)
            {
                if(strcmp(contacts[i].name,searchName)==0)
                {
                    printf("\nContact Found!\n");
                    printf("Name  : %s\n",contacts[i].name);
                    printf("Phone : %s\n",contacts[i].phone);
                    printf("Email : %s\n",contacts[i].email);
                    break;
                    }
            }

            if(i==count)
            {
                printf("\nContact Not Found.\n");
            }

            break;

        case 4:

            printf("\nEnter Name to Update: ");
            scanf(" %[^\n]",searchName);

            for(i=0;i<count;i++)
            {
                if(strcmp(contacts[i].name,searchName)==0)
                {
                    printf("Enter New Phone: ");
                    scanf("%s",contacts[i].phone);

                    printf("Enter New Email: ");
                    scanf("%s",contacts[i].email);

                    printf("\nContact Updated Successfully!\n");
                    break;
                     }
            }

            if(i==count)
            {
                printf("\nContact Not Found.\n");
            }

            break;

        case 5:

            printf("\nEnter Name to Delete: ");
            scanf(" %[^\n]",searchName);

            for(i=0;i<count;i++)
            {
                if(strcmp(contacts[i].name,searchName)==0)
                {
                    int j;

                    for(j=i;j<count-1;j++)
                    {
                        contacts[j]=contacts[j+1];
                    }

                    count--;
                    printf("\nContact Deleted Successfully!\n");
                    break;
                }
            }

            if(i==count)
            {
                printf("\nContact Not Found.\n");
            }

            break;

        case 6:

            printf("\nThank You!\n");
            break;

        default:

            printf("\nInvalid Choice!\n");

        }

    }while(choice!=6);
    
    return 0;
}