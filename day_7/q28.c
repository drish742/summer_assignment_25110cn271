#include <stdio.h>
int rev (int , int);
int rev (int n , int re){
    if (n == 0){
        return 0 ;
    }
    return (n%10)*re + rev(n/10 , re/10);
}
int main(){
    //finding rev of num using recursion 
    int num , m ;
    printf("enter the number");
    scanf ("%d" , &num);
    m = num;
    int s = 0, r = 1 ;
    while(m){
        s =0;
        s = s + r;
        m = m/10;
        r = r*10;
    }
    int renum;
    renum = rev(num , s);
    printf ("the reverse of number is %d " , renum);

    
    return 0;
}