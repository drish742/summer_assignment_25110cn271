#include <stdio.h>
int main(){
    int se , a , b , n;
    printf("enter the no. of terms");
    scanf("%d" , &n);
    a = 0;
    b = 1;
    if (n==0){
        printf("0");
    }
    else if(n == 2){
        printf("0 , 1");
    }
    else{
        printf("0 , 1 ,");
        for (int i = 3; i <= n ; i++){
        
            se = a + b;
            a = b;
            b = se ;
            printf("%d ," ,se);
        }
    }
    return 0 ;
}