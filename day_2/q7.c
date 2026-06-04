#include <stdio.h>
int main (){
    int r , n;
    int mult = 1;
    printf("enter the number: ");
    scanf("%d" , &n);
    while(n){
        r = n % 10;
        mult = mult * r;
        n = n/10;
    }
    printf("the product of digit is %d", mult);
    return 0 ;
}