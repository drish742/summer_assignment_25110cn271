#include <stdio.h>
#include <string.h>

int main(){
    //remove duplicate characters
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                for (int k = j; k < len; k++)
                {
                    str[k] = str[k + 1];
                }

                len--;
                j--;
            }
        }
    }

    printf("String after removing duplicates: %s", str);
    return 0;
}