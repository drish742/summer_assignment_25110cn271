#include <stdio.h>
#include <string.h>

#define MAX 100

// Global Arrays
char name[MAX][50];
char phone[MAX][15];
int total = 0;

// Function Prototypes
void addContact();
void displayContacts();
void searchContact();
void updateContact();
void deleteContact();
void sortContacts();

int main()
{
    int choice;

    do
    {
        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Sort Contacts\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                updateContact();
                break;

            case 5:
                deleteContact();
                break;

            case 6:
                sortContacts();
                break;

            case 7:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}

// Add Contact
void addContact()
{
    if(total == MAX)
    {
        printf("\nContact List Full!\n");
        return;
    }

    printf("\nEnter Name: ");
    scanf(" %[^\n]", name[total]);

    printf("Enter Phone Number: ");
    scanf("%s", phone[total]);

    total++;

    printf("\nContact Added Successfully!\n");
}

// Display Contacts
void displayContacts()
{
    int i;

    if(total == 0)
    {
        printf("\nNo Contacts Available.\n");
        return;
    }

    printf("\n----- CONTACT LIST -----\n");

    for(i = 0; i < total; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name : %s\n", name[i]);
        printf("Phone: %s\n", phone[i]);
    }
}

// Search Contact
void searchContact()
{
    char search[50];
    int i;

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", search);

    for(i = 0; i < total; i++)
    {
        if(strcmp(search, name[i]) == 0)
        {
            printf("\nContact Found!\n");
            printf("Name : %s\n", name[i]);
            printf("Phone: %s\n", phone[i]);
            return;
        }
    }

    printf("\nContact Not Found!\n");
}

// Update Contact
void updateContact()
{
    char search[50];
    int i;

    printf("\nEnter Name to Update: ");
    scanf(" %[^\n]", search);

    for(i = 0; i < total; i++)
    {
        if(strcmp(search, name[i]) == 0)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", name[i]);

            printf("Enter New Phone Number: ");
            scanf("%s", phone[i]);

            printf("\nContact Updated Successfully!\n");
            return;
        }
    }

    printf("\nContact Not Found!\n");
}

// Delete Contact
void deleteContact()
{
    char search[50];
    int i, j;

    printf("\nEnter Name to Delete: ");
    scanf(" %[^\n]", search);

    for(i = 0; i < total; i++)
    {
        if(strcmp(search, name[i]) == 0)
        {
            for(j = i; j < total - 1; j++)
            {
                strcpy(name[j], name[j + 1]);
                strcpy(phone[j], phone[j + 1]);
            }

            total--;

            printf("\nContact Deleted Successfully!\n");
            return;
        }
    }

    printf("\nContact Not Found!\n");
}

// Sort Contacts Alphabetically
void sortContacts()
{
    int i, j;
    char tempName[50];
    char tempPhone[15];

    for(i = 0; i < total - 1; i++)
    {
        for(j = 0; j < total - i - 1; j++)
        {
            if(strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(tempName, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tempName);

                strcpy(tempPhone, phone[j]);
                strcpy(phone[j], phone[j + 1]);
                strcpy(phone[j + 1], tempPhone);
            }
        }
    }

    printf("\nContacts Sorted Successfully!\n");

    
}