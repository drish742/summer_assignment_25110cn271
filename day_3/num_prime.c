#include <stdio.h>
int main(){
    int n, r;
    int flag = 0;
    printf("enter the number:");
    scanf("%d" , &n);
    for (int i = 2 ; i < n ; i++){
        r = n % i;
        if (r == 0){
            flag ++;
            break;
        }
    }
    if (flag == 0){
        printf("the number is prime");
    }
    
    return 0;
}