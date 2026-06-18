#include <stdio.h>
int main(){
    int a[100] , n , i , ele , pos;
    int flag = 0 ;
    printf("enter the no. of terms ");
    scanf("%d" , &n);
    printf("enter elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the element to be searched ");
    scanf("%d" , &ele);
    for(i = 0 ; i < n ; i++){
        if(ele == a[i]){
            flag++;
            pos = i+1 ;
        }

    }
    
    if(flag != 0 ){
        printf(" element found at position %d " , pos);
    }
    else{
        printf("element not found");
    }

    return 0 ;
}