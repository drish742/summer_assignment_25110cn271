#include <stdio.h>
#include <string.h>

int main(){
    //count vowels and consonants
    char a[1000] ;
    printf("enter the string ");
    fgets(a , sizeof(a) , stdin);
    int count = strlen(a) ;
    int len = count;
    int i = 0 ; 
    int countv = 0 , countc = 0 ;
    while (a[i] != '\0'){
        if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')){
            if(a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U'){
                countv++ ;
            }
            else{
                countc++;
            }
        }
        i++;
    }
    printf("the no. of vowels are %d \n the no. of consonants are %d " , countv , countc );
    
    
    return 0;
}