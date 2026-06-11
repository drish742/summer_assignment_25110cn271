#include <stdio.h>
long int fact(int);
long int fact(int num){
    if(num == 0 || num == 1){
        return 1 ;
    }
    return num * fact(num - 1);
}


int main(){
     // finding factorial using recursion 
     int n ;
     long int ans ;
     printf("enter number ");
     scanf("%d" , &n);
     ans = fact(n);
     printf("the factorial is %ld " , ans);

    return 0 ;
}