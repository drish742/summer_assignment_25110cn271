#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int available;
};

int main()
{
    struct Book books[100];
    int count = 0;
    int choice;
    int id;
    int i;
    int found;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter Book ID: ");
            scanf("%d", &books[count].id);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", books[count].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", books[count].author);

            books[count].available = 1;

            count++;

            printf("Book Added Successfully!\n");
        }

        else if(choice == 2)
        {
            if(count == 0)
            {
                printf("No Books Available.\n");
            }
            else
            {
                printf("\n------ BOOK LIST ------\n");

                for(i=0;i<count;i++)
                {
                    printf("\nBook %d\n",i+1);
                    printf("ID : %d\n",books[i].id);
                    printf("Title : %s\n",books[i].title);
                    printf("Author : %s\n",books[i].author);

                    if(books[i].available==1)
                        printf("Status : Available\n");
                    else
                        printf("Status : Issued\n");
                }
            }
        }

        else if(choice == 3)
        {
            found = 0;

            printf("Enter Book ID: ");
            scanf("%d",&id);

            for(i=0;i<count;i++)
            {
                if(books[i].id==id)
                {
                    found = 1;

                    printf("\nBook Found\n");
                    printf("ID : %d\n",books[i].id);
                    printf("Title : %s\n",books[i].title);
                    printf("Author : %s\n",books[i].author);

                    if(books[i].available==1)
                        printf("Status : Available\n");
                    else
                        printf("Status : Issued\n");

                    break;
                }
            }

            if(found==0)
                printf("Book Not Found.\n");
        }

        else if(choice == 4)
        {
            found = 0;

            printf("Enter Book ID: ");
            scanf("%d",&id);

            for(i=0;i<count;i++)
            {
                if(books[i].id==id)
                {
                    found = 1;

                    if(books[i].available==1)
                    {
                        books[i].available=0;
                        printf("Book Issued Successfully.\n");
                    }
                    else
                    {
                        printf("Book Already Issued.\n");
                    }

                    break;
                }
            }

            if(found==0)
                printf("Book Not Found.\n");
        }

        else if(choice == 5)
        {
            found = 0;

            printf("Enter Book ID: ");
            scanf("%d",&id);

            for(i=0;i<count;i++)
            {
                if(books[i].id==id)
                {
                    found = 1;

                    if(books[i].available==0)
                    {
                        books[i].available=1;
                        printf("Book Returned Successfully.\n");
                    }
                    else
                    {
                        printf("Book is Already Available.\n");
                    }

                    break;
                }
            }

            if(found==0)
                printf("Book Not Found.\n");
        }

        else if(choice == 6)
        {
            printf("Thank You!\n");
        }

        else
        {
            printf("Invalid Choice.\n");
        }

    }while(choice!=6);

    return 0;
}