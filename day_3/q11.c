#include <stdio.h>
int main(){
    //finding gcd
    int n1 , n2;
    printf("enter two numbers: ");
    scanf("%d%d" , &n1 ,&n2);
    int small = n1 ;
    int big = n2;
    if (n1 > n2){
        
        small = n2;
        big = n1;
    }
    int rem ;
    while (rem ){
        rem = big % small;
        big = small;
        small = rem ;
    }
    printf("the gcd is %d" , big);
    return 0;
}