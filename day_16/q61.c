#include <stdio.h>
int main(){
    //finding the missing number in array
    int n , m ;
    printf("enter the range ");
    scanf("%d" , &n);
    m = n+1;
    int a[m] , i , j ;
    printf("enter the elements ");
    for(i = 0 ; i < m-1 ; i++){
        scanf("%d" , &a[i]);
    }
    
    for(i = 0 ; i < m ; i++){
        int count = 0;
        for(j = 0 ; j < m-1 ; j++){
            if(i == a[j]){
                count++;
                break;
            }
        }
        if(count == 0){
            printf("the missing element is %d " , i);
            break;
        }
    }

    /* here both the ranges are included that is 0 and n both are included 
    so total number of elements become n+1
     */
    return 0 ;
}