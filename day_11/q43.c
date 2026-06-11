#include <stdio.h>
int prime(int);
int prime(int n){
    int flag = 0 , rem ;
    if(n == 2){
        printf("prime");
    }
    else if(n == 1) {
        printf("neither prime nor composite");
    }
    else{
        for(int i = 2 ; i < n ; i++){
            rem = n % i ;
            if(rem == 0){
                flag++ ;
                break ;
            }
        }
        if(flag == 0){
            printf("prime");
            }
        else {
            printf(" not prime");
            }
        
    }
}
int main(){
    int num ; 
    printf("enter the number ");
    scanf("%d" , &num);
    prime(num);

    return 0 ;
}