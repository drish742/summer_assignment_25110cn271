#include <stdio.h>
int main(){
    //to merge two sorted arrays
    int n1 , n2 ;
    printf("enter the no. of elements ");
    scanf("%d%d" , &n1 , &n2);
    int a[n1] , b[n2] , c[n1+n2] ;
    int i , j ;
    printf("enter the elements of first array: ");
    for(i = 0 ; i < n1 ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the elements fo second array: ");
    for(i = 0 ; i < n2 ; i++){
        scanf("%d" , &b[i]);
    }

    for(i = 0 ; i < n1 ; i++){
        for(j = 0 ; j < n1-i-1 ; j++){
            if(a[j] > a[j+1]){
                int temp ;
                temp = a[j] ;
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i = 0 ; i < n2 ; i++){
        for(j = 0 ; j < n2-i-1 ; j++){
            if(b[j] > b[j+1]){
                int temp ;
                temp = b[j] ;
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    printf("the array after merging is : ");
    int k = 0 ;
    for(i = 0 ; i < n1 ; i++){
        c[k] = a[i];
        k++;
    }
    for(j = 0 ; j < n2 ; j++){
        c[k] = b[j];
        k++;
    }
    for(i = 0 ; i < n1+n2 ; i++){
        for(j = 0 ; j < n1+n2 -i -1 ; j++){
            if(c[j] > c[j+1]){
                int temp = c[j] ;
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
    for(i = 0 ; i < n1+n2 ; i++){
        printf("%d  " , c[i]);
    }
    return 0 ;
}