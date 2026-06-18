#include <stdio.h>

void per(int) ;
void per(int n){
    int sum = 0 , r , m , i;
    m = n ;
    for(i = 1 ; i < n ; i++){
        r = n % i ;
        if(r == 0){
            sum = sum + i ;
        }
    }
    if(sum == n){
        printf("perfect number");
    }
    else{
        printf("not perfect") ;
    }
}
int main(){
    int num ;
    printf("enter the number");
    scanf("%d" , &num);
    per(num);

    return 0;
}