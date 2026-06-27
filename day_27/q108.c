#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main(){
    //creaete marksheet generation system
     struct Student s;
    int i;

    printf("========== MARKSHEET GENERATION SYSTEM ==========\n\n");

    // Input Student Details
    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    // Input Marks
    s.total = 0;

    printf("\nEnter Marks of 5 Subjects:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);

        s.total = s.total + s.marks[i];
    }
    s.percentage = s.total / 5.0;

    // Grade Calculation
    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 80)
        s.grade = 'B';
    else if(s.percentage >= 70)
        s.grade = 'C';
    else if(s.percentage >= 60)
        s.grade = 'D';
    else if(s.percentage >= 40)
        s.grade = 'E';
    else
        s.grade = 'F';

    // Display Marksheet
    printf("\n=============================================\n");
    printf("              STUDENT MARKSHEET\n");
    printf("=============================================\n");

    printf("Name       : %s\n", s.name);
    printf("Roll No    : %d\n", s.rollNo);

    printf("---------------------------------------------\n");

    for(i = 0; i < 5; i++)
     {
        printf("Subject %d : %d\n", i + 1, s.marks[i]);
    }

    printf("---------------------------------------------\n");
    printf("Total      : %d / 500\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);
    printf("Grade      : %c\n", s.grade);

    // Pass or Fail
    int pass = 1;

    for(i = 0; i < 5; i++)
    {
        if(s.marks[i] < 40)
        {
            pass = 0;
            break;
        }
    }

    if(pass)
        printf("Result     : PASS\n");
    else
        printf("Result     : FAIL\n");

    printf("=============================================\n");
    
    return 0 ;
}