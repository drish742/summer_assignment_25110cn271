#include <stdio.h>
int main(){
    //removing duplicates from array
    int n ; 
    printf("enter the number of elements ");
    scanf("%d" , &n);
    int a[n] , i , j , b[n] ;
    printf("enter the elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i = 0 ; i < n ; i++){
        for(j = i+1 ; j < n ; j++){
            if(a[j] == a[i]){
                for(int k = j ; k < n ; k++){
                    if(k+1 < n ){
                        a[k] = a[k+1];
                    }
                    else{
                        a[k] = 0;
                    }
                }
            }
        }
    }
    int count = 0 , l = 0 ;
    printf("the resultant array is ");

    for(i = 0 ; i < n ; i++){
        if(a[i] != 0){
            count++;
            b[l] = a[i];
            l++;
        }
       
    }
    printf("the resultant array is ");
    for(i = 0 ; i < count ; i++){
        printf("%d " , b[i]);
        
    }

    return 0;
}