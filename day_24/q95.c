#include <stdio.h>
#include <string.h>

int main(){
    //to find longest word
     char str[1000];
    char longest[100];
    int i = 0, j = 0;
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        char word[100];
        int len = 0;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[len] = str[i];
            len++;
            i++;
        }

        word[len] = '\0';

        if (len > maxLen)
        {
            maxLen = len;
            strcpy(longest, word);
        }
        if (str[i] != '\0')
        {
            i++;
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0 ;
}