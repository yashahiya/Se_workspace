#include <stdio.h>

int main() {
    int num, range, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the range: ");
    scanf("%d", &range);

    printf("\nMultiplication table of %d from 1 to %d:\n", num, range);

    for (i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}