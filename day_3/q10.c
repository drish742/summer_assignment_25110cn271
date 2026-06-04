#include <stdio.h>
int main (){
    //print prime num in range 
    int n1 , n2;
    printf ("enter the ranges ");
    scanf("%d%d" , &n1 , &n2);
    int i , j , r;
    int flag = 0;
    for(i = n1+1 ; i<n2 ; i++){
        for(j = 2 ; j < i ; j++){
            r = i %j;
            if(r == 0){
                flag ++;
                break;
            }


            
        }
        if (flag == 0){
            printf("%d" , i);
        }
    }
    return 0 ;
}