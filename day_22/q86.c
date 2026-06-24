#include <stdio.h>
int main(){
    //to count words in a sentence
     char str[1000];
    int count = 0;
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' &&
            (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }

        i++;
    }

    printf("Number of words = %d", count);
    return 0;
}