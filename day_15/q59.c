#include <stdio.h>
int main(){
    //rotating array right
    int n ;
    printf("enter n ");
    scanf("%d" , &n);
    int a[n] , b[n] , i , j , m , ele ;
    printf("enter the elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
        b[i] = a[i];
    }
    printf("enter the number of terms by which you want to rotate ");
    scanf("%d" , &m);
    for(i = 0 ; i < m ; i++){
        ele = a[n-1-i];
        for(j = n-1 ; j >= 0 ; j--){
            if(j-1 >= 0){
                b[j] = b[j-1];
            }
            else{
                b[j] = ele;
            }
           
        }
    }
    printf("the array after the rotation is ");
     for(i = 0 ; i < n ; i++){
         printf("%d " , b[i]);
     }
    return 0;
}