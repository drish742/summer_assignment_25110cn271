#include <stdio.h>

int main(){
    //quiz application
    int answer;
    int score = 0;

    printf("=================================\n");
    printf("      QUIZ APPLICATION\n");
    printf("=================================\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is New Delhi.\n\n");
    }

    // Question 2
    printf("Q2. Which language is used to develop C programs?\n");
    printf("1. Compiler\n");
    printf("2. Interpreter\n");
    printf("3. IDE\n");
    printf("4. Browser\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Compiler.\n\n");
    }

    // Question 3
    printf("Q3. How many bits are there in one byte?\n");
    printf("1. 4\n");
    printf("2. 8\n");
    printf("3. 16\n");
    printf("4. 32\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 8.\n\n");
    }

    // Question 4
    printf("Q4. Which symbol is used to end a statement in C?\n");
    printf("1. .\n");
     printf("2. :\n");
    printf("3. ;\n");
    printf("4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is ;\n\n");
    }

    // Question 5
    printf("Q5. Which loop is guaranteed to execute at least once?\n");
    printf("1. for\n");
    printf("2. while\n");
    printf("3. do-while\n");
    printf("4. None\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is do-while.\n\n");
    }

    // Final Score
    printf("=================================\n");
    printf("Your Final Score = %d/5\n", score);

    if(score == 5)
    {
        printf("Excellent! Perfect Score.\n");
    }
    else if(score >= 3)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Keep Practicing!\n");
    }

    printf("=================================\n");
    
    return 0 ;
}