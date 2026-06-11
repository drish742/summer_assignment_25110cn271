#include <stdio.h>
int main(){
    int i , j , k ;
    for (i = 9 ; i >=1 ; i--){
        if(i%2 == 0){
            printf("\n");
        }
        else{
            for(j = 9 ; j > i ; j--){
                printf(" ");
            }
            for(k = 1 ; k <= i ; k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}