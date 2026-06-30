#include <stdio.h>

int main(){
    //creating menu - driven calculator
    float num1, num2, result;
    int choice;

    printf("\n===== MENU DRIVEN CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 5)
    {
        printf("Thank You!");
        return 0;
    }

    if(choice >= 1 && choice <= 4)
    {
        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch(choice)
        {
            case 1:
                result = num1 + num2;
                printf("Result = %.2f", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2f", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2f", result);
                break;

            case 4:
                if(num2 != 0)
                {
                    result = num1 / num2;
                    printf("Result = %.2f", result);
                }
                else
                {
                    printf("Error! Division by zero is not allowed.");
                }
                break;

            default:
                printf("Invalid Choice");
        }
    }
    else
    {
        printf("Invalid Choice!");
    }
    
    return 0 ;
}