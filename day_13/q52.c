#include <stdio.h>
int main(){
    int a[100] , n , ce , co , i ;
    ce = 0 ;
    co = 0 ;
    printf("enter the no. of terms ");
    scanf("%d" , &n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i = 0 ; i < n ; i++){
        if (a[i] % 2 == 0){
            ce++;
        }
        else{
            co++;
        }
    }
    printf("the even elements are %d \n the odd elements %d " , ce , co);
    return 0 ;
}