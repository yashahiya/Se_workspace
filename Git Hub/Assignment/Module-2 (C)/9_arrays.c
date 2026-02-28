#include <stdio.h>

int main() {
   
    int arr[5];
    int i;

    printf("Enter 5 integers for the one-dimensional array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nElements of the one-dimensional array are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

   
    int arry_2[3][3];
    int j, sum = 0;

    printf("\n\nEnter elements for the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arry_2[i][j]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arry_2[i][j]);
            sum += arry_2[i][j];   
        }
        printf("\n");
    }

    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}