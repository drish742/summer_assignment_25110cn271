#include <stdio.h>
int main(){
    //program to find second largest element of the array
    int a[100] , n , i , j , lar , selar;
    printf("enter the number of elements ");
    scanf("%d" , &n);
    printf("enter the elements of the array ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    int max = a[0] ;
    for(i = 1 ; i < n ; i++){
        if(a[i] > max){
            max = a[i] ;
        }
    }
    selar = 0 ;
    for (j = 0 ; j < n ; j++){
        if(a[j] < max){
            if(selar < a[j]){
                selar = a[j] ; 
            }
        }
    }
    printf("the second largest element is %d " , selar);
    return 0;
}