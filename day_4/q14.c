#include <stdio.h>
int main(){
    // nth term of fibonacci
    int n , a , b , se , i;
    printf("enter value of n");
    scanf("%d" , &n);
    a = 0;
    b = 1;
    if (n == 1){
        printf("0");
    }
    else if (n == 2){
        printf ("1");
    }
    else{
        
        for(i = 3 ; i <= n ; i++){
            se = a + b;
            a = b;
            b = se;
        }
        printf("%d" , se);
    }
    return 0;
}