#include <stdio.h>
int sum(int) ;
int sum(int num){
    if(num == 0){
        return 0 ;
    }
    return (num%10) + sum(num/10) ;
}
int main(){
    int n , ans ;
    printf("enter the num ");
    scanf("%d" , &n);
    ans = sum(n) ;
    printf("the sum is %d " , ans);

    return 0 ;
}