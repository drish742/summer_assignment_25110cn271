#include <stdio.h>
int main(){
    int a[100] , n , i ;
    int sum = 0 , avg ;
    printf("enter n ");
    scanf("%d" , &n);
    printf("enter the element ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i = 0 ; i < n ; i++){
        sum = sum + a[i] ;
    }
    avg = sum/n ; 
    printf("the sum is %d \n the average is %d ", sum , avg);
    return 0 ;
}