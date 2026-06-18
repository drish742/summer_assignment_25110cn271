#include <stdio.h>

void pal(int) ;
void pal(int n){
    int sum = 0 ;
    int m , r ;
    m = n ;
    while(n){
        r = n %10 ;
        sum = sum*10 + r ;
        n = n/10 ;
    }
    if(sum == m){
        printf("number is palindrome");
    }
    else{
        printf("not palindrome ");
    }
}
int main(){
    int num ;
    printf("enter the number ");
    scanf("%d" , &num);
    pal(num);

    return 0 ;
}