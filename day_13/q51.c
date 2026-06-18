#include <stdio.h>
int largest(int * , int);
int largest(int *a , int n){
    int max , i;
    max = a[0] ;
    for(i = 1 ; i < n ; i++){
        if(max < a[i]){
            max = a[i] ;
        }
    }
    return max ;
}
int smallest(int * , int) ;
int smallest(int * a , int n){
    int min , i ;
    min = a[0] ;
    for(i = 1 ; i < n ; i++){
        if(min > a[i]){
            min = a[i] ;
        }
    }
    return min ;

}
int main(){
    int arr[100] , nu , small , large , j;
    printf("enter no. of terms ");
    scanf("%d" , &nu);
    printf("enter the elements ");
    for(j = 0 ; j < nu ; j++){
        scanf("%d" , &arr[j]);
    }
    large = largest(arr , nu);
    small = smallest(arr , nu);
    printf("the largest of all is %d \n the smallest is %d" , large , small);

    return 0 ;
}