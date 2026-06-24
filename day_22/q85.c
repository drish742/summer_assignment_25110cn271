#include <stdio.h>
#include <string.h>

int main(){
    //to check palindrome string
    char a[1000] ;
    printf("enter the string ");
    fgets(a , sizeof(a) , stdin);
    int len = strlen(a);
    if (a[len - 1] == '\n')
    {
        a[len - 1] = '\0';
    }

    len = strlen(a);

    char b[len + 1];

    int i = 0;
    //int count = strlen(a) + 1;
    
    // char b[count];
    while (a[i] != '\0')
    {
        b[len - 1 - i] = a[i];
        i++;
    }

    b[len] = '\0';

    int j = 0;
    int flag = 0;

    while (a[j] != '\0')
    {
        if (a[j] != b[j])
        {
            flag = 1;
            break;
        }
        j++;
    }

    if (flag == 0)
    {
        printf("the string is palindrome");
    }
    else
    {
        printf("the string is not palindrome");
    }

    
    // while (a[i] != '\0')
    // {
    //     b[count-2-i] = a[i] ;
    //     i++;
    
    // }
    // int j = 0 ;
    // int flag = 0;
    // while (b[j] != '\0')
    // {
    //     flag = 0 ;
    //     if(b[j] != a[j]){
    //         flag ++;
    //         break;
    //     }
    //     j++;
    // }
    // if(flag == 0){
    //     printf("the string is palindrome ");

    // }
    // else{
    //     printf("the string is not palidrome ");
    // }
    
    
    return 0 ;
}