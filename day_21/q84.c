#include <stdio.h>
#include <string.h>

int main(){
    //convert lowecase to uppercase
    char a[1000] ;
    printf("enter the string ");
    fgets(a , sizeof(a) , stdin);
    int count = strlen(a) ;
    int len = count;
    int i = 0 ; 
    while(a[i] != '\0'){
        if(a[i] >= 'a' && a[i] <= 'z'){
            a[i] = a[i] - 32;
        }
        i++;
    }
    printf("the string after coversion is ");
    printf("%s" , a);
    return 0;
}