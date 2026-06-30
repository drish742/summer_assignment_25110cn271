#include <stdio.h>
#include <string.h>

int main(){
    //creating menu-driven string operation system
     char str1[100], str2[100], temp[100];
    int choice, i, len;

    printf("Enter First String : ");
    scanf(" %[^\n]", str1);

    printf("Enter Second String : ");
    scanf(" %[^\n]", str2);

    do
    {
        printf("\n========== STRING MENU ==========\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse First String\n");
        printf("6. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);
         switch(choice)
        {
            case 1:
                printf("\nLength of First String = %lu", strlen(str1));
                printf("\nLength of Second String = %lu\n", strlen(str2));
                break;

            case 2:
                strcpy(temp, str1);
                printf("\nCopied String = %s\n", temp);
                break;

            case 3:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("\nConcatenated String = %s\n", temp);
                break;

            case 4:
                if(strcmp(str1, str2) == 0)
                    printf("\nStrings are Equal\n");
                else
                    printf("\nStrings are Not Equal\n");
                break;
case 5:
                strcpy(temp, str1);
                len = strlen(temp);

                printf("\nReversed String = ");

                for(i = len - 1; i >= 0; i--)
                {
                    printf("%c", temp[i]);
                }

                printf("\n");
                break;

            case 6:
                printf("\nExiting Program...\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);
    
    return 0 ;
}