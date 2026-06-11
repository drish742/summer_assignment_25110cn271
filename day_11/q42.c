#include <stdio.h>
int ma(int * , int);
int ma(int *arr , int t){
    int m ;
    m = arr[0];
    for(int i = 1; i < t ; i++){
        if(arr[i] > m){
            m = arr[i] ;
        }
    }
    return m ;
}
int main(){
    // find max 
    int a[100] , n ;
    printf("enter the no of terms ");
    scanf("%d" , &n);
    printf("enter the numbers ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    int largest = ma(a , n);
    printf("largest of all is %d " , largest);
    return 0;
}