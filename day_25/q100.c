#include <stdio.h>
#include <string.h>

int main(){
    //sorting words by length
    char str[200];
    char words[50][50];
    char temp[50];
    int count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    // Split sentence into words
    char *token = strtok(str, " ");

    while (token != NULL) {
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    // Sort words by length (Ascending Order)
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
             if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    return 0 ;
}