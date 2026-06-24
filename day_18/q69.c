#include <stdio.h>
int main(){
    //bubble sort
    int n; 
    printf("enter the num of elem ");
    scanf("%d" , &n);
    int a[n] , i , j ;
    printf("enter the elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("the sorted array is ");
    for(i = 0 ; i < n ; i++){
        printf("%d " , a[i]);
    }
    return 0 ;
}