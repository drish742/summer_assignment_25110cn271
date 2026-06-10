#include <stdio.h>
int main(){
    //print factors of a number 
    int n , m ;
    printf("enter the number");
    scanf("%d" , &n);
    int i , r ;
    
    for (i = 1 ; i <= n ; i++){
        r = n % i;
        if (r == 0){
            printf("%d" , i);
        }
    }
    return 0 ;
}