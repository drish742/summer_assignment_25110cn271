#include <stdio.h>
int main(){
    int n , base , count = 0 ;
    int m ;
    printf("enter the number and base in order ");
    scanf("%d%d" , &n , &base);
    m = n;
    int sum = 0 , s = 1 , r ;
    int dulp , rem ;
    if(base == 10){
        while(n){
            r = n % 2;
            sum = sum + (r*s);
            s = s*10 ;
            n = n / 2 ;
        }
        dulp = sum ;
        while(sum){
            rem = sum % 10 ;
            if(rem == 1){
                count++ ;
            }
        }
        printf("the set count bits are %d " , count);
    }
    else{
       while(m){
        rem = m % 10 ;
        if(rem == 1){
            count ++ ;
        }
       } 
       printf("the set count bits are %d " , count);
    }
    return 0 ;
}