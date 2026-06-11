#include <stdio.h>
int fib(int);
int fib(int num){
    if(num == 1){
        return 0 ;
    }
    else if(num == 2){
        return 1;
    }
    else{

    
    return fib(num - 1) + fib(num-2);
    }
}
int main(){
    // Fibonacci using recursion
    int n , ans ;
    printf("enter the number ");
    scanf("%d" , &n);
    for(int i = 1 ; i <= n ; i++){
        ans = fib(i);
        printf("%d" , ans);
    }
    


    return 0 ;
}