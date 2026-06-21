#include <stdio.h>
int main(){
    //finding maximum frequency element
    int n ;
    printf("enter n ");
    scanf("%d" , &n);
    int a[n] , ele , j , i ;
    printf("enter the elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    int count = 0 , flag = 0 ;
    for(i = 0 ; i < n ; i++){
        count = 1;
        for(j = i+1; j < n ; j++){
            if(a[j] == a[i]){
                count++;
            }
        }
        if(flag < count){
            flag = count;
            ele = a[i];
        }
    }
    printf("the element %d has the maximum frequency and that is %d " , ele , flag);
    return 0 ;
}