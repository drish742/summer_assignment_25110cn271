#include <stdio.h>
int main(){
    //find column wise sum
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
    for(i = 0 ; i < c ; i++){
        sum = 0;
        for(j = 0 ; j < r ; j++){
            sum = sum + a[j][i];
        }
        printf("the sum of column %d is %d " , i+1 , sum);
        printf("\n");
    }
    return 0;
}