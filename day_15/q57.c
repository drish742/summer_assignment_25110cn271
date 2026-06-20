#include <stdio.h>
int main(){
    //reversing the array
    int a[100] , i , j , n , b[100];
    printf("enter the number of elements ");
    scanf("%d" , &n);
    j = n-1;
    printf("enter the elements ");
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i = 0 ; i < n ; i++){
        b[j-i] = a[i];
    }
    printf("the reversed array is ");
    for(i = 0 ; i < n ; i++){
        printf("%d " , b[i]);
    }
    return 0 ;
    /*
    correctness --> 4/5 because of memory allocation to array
    -- solution to this 
        --first = variable length array
            int n;
            scanf - &n
            a[n] , b[n]
        --second = dynamic memory allocation
            int n
            scanf &n
            int *a = malloc(n * sizeof(int))
            int *b = malloc(n * sizeof(int))
            then
            a[i]
            b[i]
            free (a)
            free(b)
        --third = allocate only one array 
            int *a =  malloc(n * sizeof(int)) 
            for(int i = 0 ; i < n/2 ; i++){
            int temp = a[i];
            a[i] = a[n-1-i]
            a[n-1-i] = temp;
            }
            *gen third is the best solution because here 
            time comp O(n) and 
            space complexity O(1)
            ** validate the input in dma
           if (n <= 0) {
            printf("Invalid size\n");
            return 0;
            } 
            also need to check whether the memory is allocated or not 

            if(a == NULL){
            printf("memory allocation failed")
            return 1
            }

    time complexity remains same in best , average , and worst case
    space --> O(n)

    optimisation:- 
        only space can be optimized not time
        by removing extra array

        better solution 
            in place reversal 
            swaping for n/2 elements 
            for(i=0;i<n/2;i++)
                {
                int temp=a[i];
                a[i]=a[n-1-i];
                a[n-1-i]=temp;
            }
        --method 3 to use two pointer
            left = 0 ; 
            right = n-1;
            while(left<right){
            swap();
            left++;
            right--;
            }

        --method 4 is recursion
            **reve(left , right) ===== try it once 

        --method 5 using stack
            push-> pop -> print
            */
}
