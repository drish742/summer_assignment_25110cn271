#include <stdio.h>
int fib(int);
int fib(int num){
    if(num == 1){
        return 0 ;
    }
    if(num == 2){
        return 1;
    }
    return fib(num) + fib(num-1);
}
int main(){
    // Fibonacci using recursion
    int n , ans ;
    printf("enter the number ");
    scanf("%d" , &n);
    ans = fib(n) ;
    printf("%d" , ans);
    /*for(int i = 0 ; i < n ; i++){
        //ans = fib(n) ;
        printf("%d" , ans);
    }*/


    return 0 ;
}