#include<stdio.h>
#include<string.h>

int main()
{
    char name[100][50], search[50];
    int roll[100];
    float marks[100];

    int total = 0;
    int choice, i, found;
    int rollSearch;

    while(1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Name: ");
                scanf(" %[^\n]",name[total]);

                printf("Enter Roll Number: ");
                scanf("%d",&roll[total]);

                printf("Enter Marks: ");
                scanf("%f",&marks[total]);

                total++;

                printf("Student Added Successfully!\n");

                break;

            case 2:

                if(total==0)
                {
                    printf("No Records Found.\n");
                }
                else
                {
                    printf("\nStudent Records\n");

                    for(i=0;i<total;i++)
                    {
                        printf("\nStudent %d\n",i+1);
                        printf("Name : %s\n",name[i]);
                        printf("Roll : %d\n",roll[i]);
                        printf("Marks : %.2f\n",marks[i]);
                    }
                }

                break;

            case 3:

                found = 0;

                printf("Enter Name to Search: ");
                scanf(" %[^\n]",search);

                for(i=0;i<total;i++)
                {
                    if(strcmp(name[i],search)==0)
                    {
                        printf("\nRecord Found\n");
                        printf("Name : %s\n",name[i]);
                        printf("Roll : %d\n",roll[i]);
                        printf("Marks : %.2f\n",marks[i]);

                        found = 1;
                        break;
                    }
                }

                if(found==0)
                    printf("Student Not Found.\n");

                break;

            case 4:

                found = 0;

                printf("Enter Roll Number: ");
                scanf("%d",&rollSearch);

                for(i=0;i<total;i++)
                {
                    if(roll[i]==rollSearch)
                    {
                        printf("Enter New Marks: ");
                        scanf("%f",&marks[i]);

                        printf("Marks Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found==0)
                    printf("Student Not Found.\n");

                break;

            case 5:

                found = 0;

                printf("Enter Roll Number to Delete: ");
                scanf("%d",&rollSearch);

                for(i=0;i<total;i++)
                {
                    if(roll[i]==rollSearch)
                    {
                        int j;

                        for(j=i;j<total-1;j++)
                        {
                            strcpy(name[j],name[j+1]);
                            roll[j]=roll[j+1];
                            marks[j]=marks[j+1];
                        }

                        total--;

                        printf("Record Deleted Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found==0)
                    printf("Student Not Found.\n");

                break;

            case 6:

                printf("Thank You!\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }
    return 0 ;
    
}