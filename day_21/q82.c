#include <stdio.h>
int main(){
    //reverse a string
    int n ; 
    printf("enter hte size of string ");
    scanf("%d" , &n);
    char a[n] , b[n] ;
    getchar();
    int i;
    printf("enter the string ");
    for(i = 0 ; i < n-1 ; i++){
        scanf("%c" , &a[i]);
    }
    a[n-1] = '\0' ;
    int m ;
    m = n-1;
    printf("the reverse of the strign is ");
    for(i = 0 ; i < m ; i++){
        b[i] = a[n-2-i];
       
    }
    b[n-1] = '\0' ;
    for(i = 0 ; i < n ; i++){
        printf("%c" , b[i]);
    }
        /*insteaed of this we can simply write 
        printf("%s" , b);
        */


    return 0;
}