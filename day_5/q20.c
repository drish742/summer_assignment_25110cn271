#include <stdio.h>
int main(){
    // largest prime factors
    int n , i , j ;
    printf("enter the number ");
    scanf("%d" , &n);
    int r , max , rem ;
    int flag = 0 ;
    max = n ;
    for(i = 2 ; i < n ; i++){
        rem = n % i ;
        if(rem == 0){
            flag = 0;
            for(j = 2 ; j < i ; j++){
                r = i % j ;
                if(r == 0){
                    flag ++ ;
                }
            }
            if(flag == 0){
                max = i ;
            }
        }
    }
    printf("largest factor is %d " , max);
    return 0 ;
}