#include <stdio.h>
int main(){
    // add two matrices
    int n1 , n2 ;
    printf("enter the order of matrix ");
    scanf("%d%d" , &n1 , &n2);
    int a[n1][n2] , b[n1][n2] , i , j , c[n1][n2] ;
    printf("enter the elements of the first matrix ") ;
    for(i = 0 ; i < n1 ; i++){
        for(j = 0 ; j < n2 ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    printf("enter the elements fo the second matrix ");
    for(i = 0 ; i < n1 ; i++){
        for(j = 0 ; j < n2 ; j++){
            scanf("%d" , &b[i][j]);
        }
    }
    for(i = 0 ; i < n1 ; i++){
        for(j = 0 ; j < n2 ; j++){
            c[i][j] = a[i][j] - b[i][j] ;
        }
    }
    printf("the difference the given two matrices is \n");
    for(i = 0 ; i < n1 ; i++){
        for(j = 0 ; j < n2 ; j++){
           printf("%d " , c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}