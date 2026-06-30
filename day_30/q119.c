#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[30];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int count = 0;
    int choice, i, id;
    float newSalary;

    while (1)
    {
        printf("\n========== Employee Management System ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[count].id);

            printf("Enter Name: ");
            scanf("%s", emp[count].name);

            printf("Enter Department: ");
            scanf("%s", emp[count].department);

            printf("Enter Salary: ");
            scanf("%f", &emp[count].salary);

            count++;

            printf("\nEmployee Added Successfully!\n");
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                printf("\nNo Employee Records Found!\n");
            }
            else
            {
                printf("\n----- Employee Records -----\n");

                for (i = 0; i < count; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID         : %d\n", emp[i].id);
                    printf("Name       : %s\n", emp[i].name);
                    printf("Department : %s\n", emp[i].department);
                    printf("Salary     : %.2f\n", emp[i].salary);
                }
            }
        }

        else if (choice == 3)
        {
            int found = 0;

            printf("\nEnter Employee ID: ");
            scanf("%d", &id);

            for (i = 0; i < count; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found\n");
                    printf("ID         : %d\n", emp[i].id);
                    printf("Name       : %s\n", emp[i].name);
                    printf("Department : %s\n", emp[i].department);
                    printf("Salary     : %.2f\n", emp[i].salary);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Not Found!\n");
            }
        }

        else if (choice == 4)
        {
            int found = 0;

            printf("\nEnter Employee ID: ");
            scanf("%d", &id);

            for (i = 0; i < count; i++)
            {
                if (emp[i].id == id)
                {
                    printf("Current Salary: %.2f\n", emp[i].salary);

                    printf("Enter New Salary: ");
                    scanf("%f", &newSalary);

                    emp[i].salary = newSalary;

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

        else if (choice == 5)
        {
            int found = 0;

            printf("\nEnter Employee ID: ");
            scanf("%d", &id);

            for (i = 0; i < count; i++)
            {
                if (emp[i].id == id)
                {
                    int j;

                    for (j = i; j < count - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    count--;

                    printf("Employee Deleted Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Not Found!\n");
            }
        }

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