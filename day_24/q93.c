#include <stdio.h>
#include <string.h>

int main(){
    //to check string rotation
     char s1[100], s2[100];
    int i, j, n, flag;

    printf("Enter fisrt string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    n = strlen(s1);

    if(n != strlen(s2))
    {
        printf("Not a rotation");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        flag = 1;

        for(j = 0; j < n; j++)
        {
            if(s1[(i + j) % n] != s2[j])
            {
                flag = 0;
                break;
                 }
        }

        if(flag)
        {
            printf("Rotation");
            return 0;
        }
    }

    printf("Not a rotation");

    return 0 ;
}