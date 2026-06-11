#include <stdio.h>
int main(){
    int i , j ,k ,g ;
    for (i = 65 ; i <= 69 ; i++){
        for(g = 69 ; g > i ; g--){
            printf(" ");
        }
        for(j = 65 ; j <= i ; j++){
            printf("%c" , j);
        }
        for(k = 68 ; k >= i ; k--){
            printf("%c" , k);
        }
        printf("\n");
    }
    return 0;
}