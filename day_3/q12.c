#include <stdio.h>
int main(){
    //finding lcm
    int n1 , n2, small , big ;
    printf("enter the numbers ");
    scanf("%d%d" , &n1 ,&n2);
    small = n1;
    big = n2;
    if (n1>n2){
        small = n2;
        big = n1;
    }
    int rem;
    rem = big % small;
    int lcm;
    if(rem == 0){
        lcm = big;
        printf("lcm is %d" , lcm);
        
    }
    else{
        lcm = big*small;
        printf("lcm is %d" , lcm);
    }
    return 0;
}