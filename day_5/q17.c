#include <stdio.h>
int main (){
    // to check perfect number
    int n , m ;
    printf("enter the number: ");
    scanf("%d" , &n);
    m = n ;
    int r , i ;
    int sum = 0 ;
    for (i = 1 ; i < n ; i++){
        r = n%i ;
        if (r == 0){
            sum = sum + i;
        }
    }
    if (sum == n){
        printf("perfect number !!!");
    }
    else{
        printf("not perfect number!!");
    }
    return 0;
}