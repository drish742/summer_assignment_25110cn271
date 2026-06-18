#include <stdio.h>
int main(){
    int a[100] , n , i , j , ele ;
    printf("enter n ");
    scanf("%d" , &n);
    printf("enter elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &n);
    }
    printf("enter the element whose frequency to be found ");
    scanf("%d" , &ele) ;
    int count = 0; 
    for(j = 0 ; j < n ; j++){
        if(ele == a[j]){
            count++;
        }
    }
    if(count != 0){
        printf("the frequency is %d " , count);
    }
    else {
        printf("element not found ");
    }
    return 0 ;
}