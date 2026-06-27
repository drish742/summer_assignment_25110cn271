#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //creating number guessing game
    int number, guess, attempts = 0;

    // Generate a different random number every time
    srand(time(0));

    // Random number between 1 and 100
    number = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number)
        {
            printf("Too High!\n\n");
        }
        else if (guess < number)
        {
            printf("Too Low!\n\n");
        }
        else
        {
            printf("\nCongratulations!\n");
            printf("You guessed the correct number.\n");
            printf("Attempts = %d\n", attempts);
        }

    } while (guess != number);
    

    return 0 ;
}