#include <stdio.h>
int main(){
    //check strong num
    int n , r , m;
    printf("enter the number ");
    scanf("%d" , &n);
    m = n;
    int fact = 1 , sum = 0 ;
    while(n){
        r = n % 10;
        n = n/10;

        for(int i = 1 ; i <= r ; i++){
            fact = fact * i ;
        }
        sum = sum + fact ;

    }
    if(sum == m){
        printf("it is strong number");
    }
    else{
        printf("not strong number");
    }
    return 0 ;
}