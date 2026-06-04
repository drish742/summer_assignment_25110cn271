#include <stdio.h>
int main (){
    //checking palindrome
    int n , m, r;
    int rev = 0 ;
    printf("enter the number: ");
    scanf("%d" , &n);
    m = n;
    while(m){
        r = m % 10 ;
        rev = rev*10 + r;
        m = m/10;
    }
    if (n == m){
        printf("the number is palindrome ");
    }
    return 0 ;
}