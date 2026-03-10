#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {

        int value = 1;  

       
        for (int space = 0; space < N - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4d", value);

            
            // C(i, j+1) = C(i, j) * (i - j) / (j + 1)
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}