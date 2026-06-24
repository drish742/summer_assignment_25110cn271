#include <stdio.h>
int main(){
    //find string length without strlen()
    char a[1000];
    printf("enter the string ");
    fgets(a , sizeof(a) , stdin);
    int i = 0 ;
    int count = 0 ; 
    while(a[i] != '\0'){
        count++;
        i++;
    }
    printf("the length of the string is %d " , count);
    return 0 ;
}