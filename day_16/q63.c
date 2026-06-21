#include <stdio.h>
int main(){
    //find pair with given sum
    int n;
    printf("enter the number of elements ");
    scanf("%d" , &n);
    int a[n] , i , j , sum ;
    printf("enter the elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the sum you wnat to obtain ");
    scanf("%d" , &sum);
    printf("the pairs are ");
    for(i = 0 ; i < n ; i++){
        for(j = i+1 ; j < n ; j++){
            if(a[i] + a[j] == sum){
                printf("%d and %d " , a[i] , a[j]);
            }
        }
    }
    return 0;
}