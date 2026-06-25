#include <stdio.h>
int main(){
    //find first repeating character
     char str[1000];
    int i, j, count;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count > 1)
        {
            printf("First repeating character = %c", str[i]);
            found = 1;
            break;
        }
    }
     if(found == 0)
    {
        printf("No repeating character found");
    }
    return 0;
}