#include <stdio.h>

long int fact(int);
long int fact(int n){
    int fa = 1 ;
    for(int i = 1 ; i <= n ; i++){
        fa = fa*i ;
    }
    return fa ;
}

int main(){
    int num ; 
    long int factorial ;
    printf("enter the number ");
    scanf("%d" , &num);
    if(num == 0){
        printf("1");
    }
    else if (num < 0){
        printf("factorial not possible ");
    
    }
    else{
        factorial = fact(num);
        printf("the factorial is %ld " , factorial);
    }

    return 0;
}