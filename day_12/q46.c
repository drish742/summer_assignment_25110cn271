#include <stdio.h>
#include <math.h>
void arm(int) ;
void arm(int n){
    double p ;
    int flag = 0 , r , m , org;
    m = org = n ;
    int sum = 0 ;
    while(n){
        r = n % 10 ;
        flag ++ ;
        n = n / 10;
    }
    while(m){
        r = m % 10;
        
        p = pow((double) r , (double) flag);
        m = m/10 ;
        sum = sum + p;
    }
    if(sum == org){
        printf("number is armstrong");
    }
    else{
        printf("not ar strong");
    }
}
int main(){
    int num ;
    printf("enter the number ");
    scanf("%d" , &num);
    arm(num);
    return 0 ;
}