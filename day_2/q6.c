#include <stdio.h>
int main(){
    // reverse of a number 
    int r , n ;
    int rev = 0;
    printf ("enter the number: ");
    scanf("%d" , &n);
    while(n){
        r = n % 10;
        rev = rev*10 + r ;
        n = n/ 10;
    }
    printf("the reverse of the number is %d " , rev);
}