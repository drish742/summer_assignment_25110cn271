#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main(){
    //create student record management system 
    struct Student s[100];
    int choice;
    int n = 0;
    int i, j;
    int roll;
    int found;

    while (1)
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Add Student
        if (choice == 1)
        {
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].roll);
             printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;

            printf("Student Record Added Successfully!\n");
        }

        // Display Students
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("\nNo Records Found!\n");
            }
            else
            {
                printf("\nStudent Records\n");
                printf("----------------------------\n");

                for (i = 0; i < n; i++)
                {
                    printf("Roll Number : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("Marks       : %.2f\n", s[i].marks);
                    printf("----------------------------\n");
                }
            }
        }

        // Search Student
        else if (choice == 3)
        {
            found = 0;

            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("\nRecord Found\n");
                    printf("Roll Number : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("Marks       : %.2f\n", s[i].marks);

                    found = 1;
                    break;
                }
                 }

            if (found == 0)
            {
                printf("Record Not Found!\n");
            }
        }

        // Update Student
        else if (choice == 4)
        {
            found = 0;

            printf("Enter Roll Number to Update: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("Enter New Name: ");
                    scanf("%s", s[i].name);

                    printf("Enter New Marks: ");
                    scanf("%f", &s[i].marks);
                    found = 1;

                    printf("Record Updated Successfully!\n");
                    break;
                }
            }

            if (found == 0)
            {
                printf("Record Not Found!\n");
            }
        }

        // Delete Student
        else if (choice == 5)
        {
            found = 0;

            printf("Enter Roll Number to Delete: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    n--;
                    found = 1;

                    printf("Record Deleted Successfully!\n");
                    break;
                }
            }

            if (found == 0)
            {
                printf("Record Not Found!\n");
            }
        }

        // Exit
        else if (choice == 6)
        {
            printf("Thank You!\n");
            return 0;
        }

        // Invalid Choice
        else
        {
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0 ;
}