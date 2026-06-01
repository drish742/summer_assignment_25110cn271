#include <stdio.h>

int main(){
    // to calculate the sum of first n natural numbers
    int n , i ;
    printf("enter the number :");
    scanf("%d" , &n);
    int sum = 0;
    for (i = 1; i<=n ; i++){
        sum = sum + i;

    }printf("the sum of n natural nubmers is %d" , sum);
    return 0;
}