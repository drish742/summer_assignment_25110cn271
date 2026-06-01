#include <stdio.h>
int main() {
    int n ;
    printf("enter the number: ");
    scanf("%d" , &n);
    int r = 0;
    while(n){
        r++;
        n = n/10;
    }
    printf("the number of  digits are %d" , r);

    return 0;
}