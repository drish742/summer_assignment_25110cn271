#include <stdio.h>
int main(){
    //find row wise sum
    int r , c ;
    printf("enter the order of matrix ");
    scanf("%d%d" , &r , &c);
    int a[r][c] , i , j ;
    int sum = 0 ;
    printf("enter the elements of array ");
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    for(i = 0 ; i < r ; i++){
        sum = 0;
        for(j = 0 ; j < c ; j++){
            sum = sum + a[i][j];
        }
        printf("the sum of %d th row is %d " , i+1 , sum);
        printf("\n");
    }
    return 0;
}