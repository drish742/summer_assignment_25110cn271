#include <stdio.h>

int main(){
    // printing the  multiplication 
    int n , i ;
    printf("enter the nubmer ");
    scanf("%d" , &n);
    int mul = 1;
    for (i = 1 ; i <= 10; i++){
        mul = i*n;
        printf("%d x %d = %d \n" , n , i , mul);
    }
    return 0 ;
}