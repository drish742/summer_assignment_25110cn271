#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float bonus;
    float tax;
    float netSalary;
};

int main(){
    //create salary management sysem
     struct Employee emp[10];
    int n, i;

    printf("===== Salary Management System =====\n");

    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        // Calculate HRA
        emp[i].hra = emp[i].basicSalary * 0.20;

        // Calculate DA
        emp[i].da = emp[i].basicSalary * 0.10;
        if(emp[i].basicSalary >= 50000)
        {
            emp[i].bonus = emp[i].basicSalary * 0.15;
        }
        else
        {
            emp[i].bonus = emp[i].basicSalary * 0.10;
        }

        // Calculate Tax
        if(emp[i].basicSalary >= 50000)
        {
            emp[i].tax = emp[i].basicSalary * 0.10;
        }
        else
        {
            emp[i].tax = emp[i].basicSalary * 0.05;
        }

        // Calculate Net Salary
        emp[i].netSalary = emp[i].basicSalary +
                           emp[i].hra +
                           emp[i].da +
                           emp[i].bonus -
                           emp[i].tax;
         }

    printf("\n\n========== Employee Salary Report ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("-----------------------------\n");
        printf("Employee ID   : %d\n", emp[i].empId);
        printf("Name          : %s\n", emp[i].name);
        printf("Basic Salary  : %.2f\n", emp[i].basicSalary);
        printf("HRA           : %.2f\n", emp[i].hra);
        printf("DA            : %.2f\n", emp[i].da);
        printf("Bonus         : %.2f\n", emp[i].bonus);
        printf("Tax           : %.2f\n", emp[i].tax);
        printf("Net Salary    : %.2f\n", emp[i].netSalary);
    }
    return 0 ;
}