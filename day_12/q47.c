#include <stdio.h>
void fib(int) ;
void fib(int n){
    int a = 0 , b = 1 , se , i ;
    for(i = 1 ; i <= n ; i++){
        if(i==1){
            printf("0") ;
        }  
        else if(i == 2){
            printf(", 1");
        }
        else{
            se = a + b ;
            a = b ; 
            b = se;
            printf(", %d" , se);
        }
      }
}
int main(){
    int term ;
    printf("enter the terms ");
    scanf("%d" , &term);
    fib(term) ;

    return 0 ;
}