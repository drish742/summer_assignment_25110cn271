#include <stdio.h>
int main(){
    int n , power ;
    printf("enter the number and expo ");
    scanf("%d%d" , &n , &power);
    long double cou = 1 ;
    for(int i = 1 ; i <= power ; i++){
        cou = cou*n ;
    }
    printf("the answer is %Lf " , cou);
    return 0 ;
}