#include <stdio.h>
int main(){
    int n , r;
    int sum = 0 ;
    printf("enter the number : ");
    scanf("%d" , &n);
    while (n){
        r = n%10;
        sum = sum + r;
        n = n / 10;
    }
    printf("the sum of digits is %d" , sum);
    
    return 0;
}