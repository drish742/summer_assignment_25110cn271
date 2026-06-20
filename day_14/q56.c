#include <stdio.h>
int main(){
    //finding duplicates in the array
    int a[100] , n , i , j , k ;
    printf("enter the n ");
    scanf("%d" , &n);
    printf("enter the elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    int count = 0 , flag = 0 ;
    printf("the duplicates are ");
    for(i = 0 ; i < n ; i++){
        count = 0;
        flag = 0;
        for(j = i+1 ; j < n ; j++){
            if(a[i] == a[j]){
                count++;
                break;
            }
        }
        for(k = 0 ; k < i ; k++){
            if(a[k] == a[i]){
                flag ++;
                break;
            }
        }
        if(count != 0  && flag == 0){
            printf("%d " , a[i]);
        }
    }

    /*
    decoding algo
    i is to traverse the array and select each element
    j is to check if the same element is found later that is after the ith element
    now suppose if repetition is there then it might print one element multiple times so 
    for that k is there 
    k is to check if the same element was present before ith postion 
    if it has that means it is already printed so no need to print it again
    */
/*
can be optimised using hast map or hash tree
or can be optimised using sorting 
-- first sort it then apply j wala loop so no need for k wala loop
*/  

    return 0;
}