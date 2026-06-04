#include <stdio.h>
#include <math.h>
int main (){
    int n1 , n2 ;
    int flag = 0;
    printf("enter the range");
    scanf("%d%d" , &n1 , &n2);
    int i , r , m , a , num;
    double po;
    for (i = n1+1 ; i < n2 ; i++){
        m = a = i;
        while(i){
            flag++ ;
            i = i/10;
        }
        while(m){
            r = m%10;
            po = pow((double)r , flag);
            num = num*10 + po;
            m = m/10;

        }
        if(num == a){
            printf("%d" , num);
        }
    }
    return 0;
}