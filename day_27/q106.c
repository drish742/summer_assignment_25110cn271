#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    int age;
    float salary;
};

int main(){
    //to create employee management system
    struct Employee emp[100];
    int n = 0;
    int choice;
    int i, id, found;

    while (1)
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Add Employee
        if (choice == 1)
        {
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

             printf("Enter Age: ");
            scanf("%d", &emp[n].age);

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;

            printf("\nEmployee Added Successfully!\n");
        }

        // Display Employees
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("\nNo Employee Records Found!\n");
            }
            else
             {
                printf("\nEmployee Records:\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID : %d\n", emp[i].id);
                    printf("Name : %s\n", emp[i].name);
                    printf("Age : %d\n", emp[i].age);
                    printf("Salary : %.2f\n", emp[i].salary);
                }
            }
        }

        // Search Employee
        else if (choice == 3)
        {
            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                     printf("\nEmployee Found!\n");
                    printf("ID : %d\n", emp[i].id);
                    printf("Name : %s\n", emp[i].name);
                    printf("Age : %d\n", emp[i].age);
                    printf("Salary : %.2f\n", emp[i].salary);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Not Found!\n");
            }
        }

        // Update Salary
        else if (choice == 4)
        {
            printf("\nEnter Employee ID: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
             {
                if (emp[i].id == id)
                {
                    printf("Current Salary: %.2f\n", emp[i].salary);

                    printf("Enter New Salary: ");
                    scanf("%f", &emp[i].salary);

                    printf("Salary Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Not Found!\n");
            }
        }

        // Delete Employee
        else if (choice == 5)
        {
            printf("\nEnter Employee ID to Delete: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    int j;

                    for (j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    n--;

                    printf("\nEmployee Deleted Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Not Found!\n");
                break;
            }
            }

        // Exit
        else if (choice == 6)
        {
            printf("\nThank You!\n");
            break;
        }

        else
        {
            printf("\nInvalid Choice!\n");
        }
    }
    
    return 0;
}