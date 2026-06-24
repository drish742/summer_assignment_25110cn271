#include <stdio.h>
int main(){
    //transpose of matrix
    int n1 , n2 ;
    printf("enter the order ");
    scanf("%d%d" , &n1 , &n2);
    int a[n1][n2] , b[n1][n2] , j , i ;
    printf("enter the elements of the matrix ") ;
    for(i = 0 ; i < n1 ; i++){
        for(j = 0 ; j < n2 ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    for(i = 0 ; i < n1 ; i++){
        for(j = 0 ; j < n2 ; j++){
            b[j][i] = a[i][j] ;
        }
    }
    printf("the transpose is : \n");
    for(i = 0 ; i < n2 ; i++){
        for(j = 0 ; j < n1 ; j++){
           printf("%d  " , b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}