#include <stdio.h>
#include <math.h>
int main(){
    int n , r ;
    double flag = 0;
    printf("enter the number");
    scanf("%d" , &n);
    int m = n;
    //int r;
    while(n){
        r = n%10;
        flag ++;
    }
    double po , sum ;
    int ld ;
    while (n){
        ld = n % 10;
        po = pow((double) ld , flag);
        sum = sum + po;
        n = n/10;
    }
    if (sum == m){
        printf ("it is armstrong");
    }
    else{
        printf ("it is not armstrong number ");
    }

    return 0;
}