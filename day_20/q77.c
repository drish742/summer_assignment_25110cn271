#include <stdio.h>
int main(){
    //multiply matrix
    int n1 , m1 , n2 , m2 ;
    printf("enter the order of matrix 1 ");
    scanf("%d%d" , &n1 , &m1);
    printf("enter the order of matrix 2 ");
    scanf("%d%d" , &n2 , &m2);
    int a[n1][m1] , b[n2][m2] , i , j , k ;
    int sum = 0;
    int c[n1][m2];
    if(n2 != m1){
        printf("multiplication cannot take place");
        
    }
    else{
        printf("enter the elements  of first matrix ");
        for(i = 0 ; i < n1 ; i++){
            for(j = 0 ; j < m1 ; j++){
                scanf("%d" , &a[i][j]);
            }
        }
        printf("enter the elements  of second matrix ");
        for(i = 0 ; i < n2 ; i++){
            for(j = 0 ; j < m2 ; j++){
                scanf("%d" , &b[i][j]);
            }
        }
        for(i = 0 ; i < n1 ; i++){
            for(j = 0 ; j < m2 ; j++){
                sum = 0 ;
                for(k = 0 ; k < n2 ; k++){
                    sum = sum + (a[i][k] * b[k][j]) ;
                }
                c[i][j] = sum ;
            }
        }
        printf("the matrix after multiplication is \n");
        for(i = 0 ; i < n1 ; i++){
            for(j = 0 ; j < m2 ; j++){
                printf("%d " , c[i][j]);
            }
            printf("\n");
        }
    }
    return 0 ;
}