#include <stdio.h>
int main(){
    //to find maximum occuring character
    char str[1000];
    int freq[256] = {0};
    int i;
    int maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')
        {
            freq[(unsigned char)str[i]]++;
        }
    }

    // Find maximum occurring character
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n' &&
           freq[(unsigned char)str[i]] > maxFreq)
        {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
            }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Freauency = %d", maxFreq);
    return 0 ;
}