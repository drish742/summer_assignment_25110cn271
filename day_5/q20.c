#include <stdio.h>
int main(){
    // largest prime factors
    int n ;
    printf("enter the number");
    scanf("%d" , &n);
    int i , r , j , max , rem ;
    for(i = 2 ; i <=n ; i++){
        r = n%i;
        if (r == 0){
            for(j = 2 ; j < i ; j++){
                rem = i%j ;
                if (rem != 0){
                    max = i;
                }

            }
        }
    }
    printf("largest factor is %d" , max);
    return 0 ;
}