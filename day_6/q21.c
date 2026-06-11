#include <stdio.h>
int main (){
    // decimal to binary
    int n, m , r;
    int sum = 0 , s = 1;
    
    printf("enter the number");
    scanf("%d" ,&n);
    m = n;
    while(n){
        r = n%2 ;
        sum = sum + (r*s);
        s = s*10 ;
        n = n/2 ;
    }
    printf("the binary is %d " , sum);
    

    return 0 ;
}