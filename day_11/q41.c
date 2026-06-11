#include <stdio.h>
int sum(int , int);
int sum(int n1 , int n2){
    int s = n1 + n2;
    return s ;
}
int main(){
    int a , b , ans ;
    printf("enter the numbers ");
    scanf("%d%d" , &a , &b);
    ans = sum(a , b);
    printf("the sum is %d " , ans);
    
    return 0 ;
}