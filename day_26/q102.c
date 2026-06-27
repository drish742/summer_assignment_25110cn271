#include <stdio.h>
int main(){
    //creating voting eligibility system
    int age;

    // Taking input from the user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Checking eligibility
    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else if (age >= 0)
    {
        printf("You are not eligible to vote.\n");
        printf("You can vote after %d year(s).\n", 18 - age);
    }
    else
    {
        printf("Invalid age entered.\n");
    }
    return 0;
}