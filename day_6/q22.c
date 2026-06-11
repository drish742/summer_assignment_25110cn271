#include <stdio.h>
int main(){
    // binary to decimal
    int n ;
    printf("enter the number ");
    scanf("%d" , &n);
    int sum = 0 , s = 1 , m , r;
    m = n ;
    while(n){
        r = n%10 ;
        sum = sum + (r*s) ;
        s = s*2 ;
        n = n/10 ;
    }
    printf("the decimal number is %d " , sum);
    
    return 0 ;
}