#include <stdio.h>
int main(){
    // rotating array left
    int a[100] , i , j , b[100] , n , ele , m ;
    printf("enter n ");
    scanf("%d" , &n);
    printf("enter elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
        b[i] = a[i];
    }
    printf("enter the number of times you want to rotate left ");
    scanf("%d" , &m);
    for(i = 0 ; i < m ; i++){
        ele = a[i];
        for(j = 0 ; j < n ; j++){
            
            if(j+1 < n){
                b[j] = b[j+1];
            }
            else{
                b[j] = ele ;
            }
        }
     
    }
    printf("the rotated array is ");
    for(i = 0 ; i < n ; i++){
        printf("%d " , b[i]);
    }
    return 0;
}