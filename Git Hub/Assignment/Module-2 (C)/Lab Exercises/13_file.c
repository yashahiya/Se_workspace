#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char text[200];

    
    fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

   
    printf("Enter a string to write into the file: ");
    scanf("%s", text);

    
    fprintf(fp, "%s", text);

   
    fclose(fp);

    printf("\nData written to file successfully.\n");

    
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nReading from file:\n");

    
    while (fscanf(fp, "%199s", text) != EOF) {
        printf("%s ", text);
    }

    // Close file
    fclose(fp);

    return 0;
}