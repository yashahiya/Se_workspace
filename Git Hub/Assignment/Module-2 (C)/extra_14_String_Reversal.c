#include <stdio.h>
#include<conio.h>

void reverseString(char str[]) {
    int length = 0;
    char temp;

    
    while (str[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    
   
    
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}