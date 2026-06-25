#include <stdio.h>
#include <string.h>

int main(){
    //to compress string
     char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    int i = 0;

    while (i < len)
    {
        int count = 1;

        while (i < len - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);

        i++;
    }
   
    return 0;
}
