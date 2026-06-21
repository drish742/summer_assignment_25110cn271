#include <stdio.h>
int main(){
    //moving zeroes to end
    int n ;
    printf("enter the number ");
    scanf("%d" , &n);
    int count = 0 , m ;
    m = n ; 
    //while to get number of digits
    while(n){
        count++;
        n = n/10;
    }
    int a[count] , b[count] , i , j , org , r ;
    org = m;
    i = 0 ;
    //to copy number in array but since it got reversed
    while(m){
        a[i] = m%10;
        m = m/10;
        i++;
    }
    //this is to reverse array so that number can be restored to original position
    for(i = 0 ; i < count/2 ; i++){
        int temp = a[i];
        a[i] = a[count-1-i];
        a[count-1-i] = temp;
    }
    
    // for(i = 0 ; i < count ; i++){
    //     b[i] = a[i];
    // }
    // printf("a and b are ");
    // for(i = 0 ; i < count ; i++){
    //     printf("%d , %d \n" , a[i] , b[i]);
    // }
    int k = 0 , l = 0 ;
    for(i = 0 ; i < count ; i++){
        
        if(a[i] == 0){
            b[count-1-k] = 0;
            k++;
        }
        else{
            b[l] = a[i];
            l++;
        }
    }
    printf("the resultant is ");
    for(i = 0 ; i < count ; i++){
        printf("%d " , b[i]);
    }

    return 0;
}