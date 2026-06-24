#include <stdio.h>
int main(){
    //find diagonal sum
    int n ;
    printf("enter the order ");
    scanf("%d" , &n);
    int a[n][n] , i , j ;
    printf("enter the elements ");
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    int sum = 0 ;
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            if(i == j){
                sum = sum + a[i][j];
            }
        }
    }
    printf("the sum of the diagonal element is %d " , sum) ;
    return 0 ;
}