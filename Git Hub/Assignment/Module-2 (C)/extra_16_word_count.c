#include <stdio.h>
#include<conio.h>

int main() {
    char str[200];
    int i = 0;
    int words = 0;
    int inWord = 0;   

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (inWord == 0) {
                words++;      
                inWord = 1;   
            }
        } else {
            inWord = 0;       
        }

        i++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}