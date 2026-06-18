#include <stdio.h>
int main(){
    int a[100] , n, i , j ;
    printf("enter n");
    scanf("%d" , &n);
    printf("enter the elements");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("the elements are ");
    for(j = 0 ; j < n ; j++){
        printf("%d , " , a[j]);
    }
    return 0 ;
}