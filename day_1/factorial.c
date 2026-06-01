#include <stdio.h>
int main(){
    //printing the factorial
    int n , i;
    printf("enter the number : ");
    scanf("%d" , &n);
    int mult = 1 ;
    for (i = 1 ; i <= n ; i++){
        mult = mult * i;
    }
    printf("the factorial is %d" , mult);
    return 0;
}