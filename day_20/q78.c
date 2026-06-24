#include <stdio.h>
int main(){
    //check symmetric mtx
    int r1 , c1;
    printf("enter the order of matrix ");
    scanf("%d%d" , &r1 , &c1);
    if(r1 != c1){
        printf("entries for square matrix are allowed ");
    }
    else{
        int a[r1][c1] , b[c1][r1] , i , j ;
    printf("enter the elements ");
    for(i = 0 ; i < r1 ; i++){
        for(j = 0 ; j < c1 ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    for(i = 0 ; i < r1 ; i++){
        for(j = 0 ; j < c1 ; j++){
            b[j][i] = a[i][j] ;
        }
    }
    int count = 0 ;
    for(i = 0 ; i < c1 ; i++){
        for(j = 0 ; j < r1 ; j++){
            if(b[i][j] != a[i][j]){
                count++;
                break;
            }
        }
    }
    if(count == 0){
        printf("the matrix is symmetric ");
    }
    else{
        printf("the matrix si not symmetric");
    }

    }
    
    return 0;
}