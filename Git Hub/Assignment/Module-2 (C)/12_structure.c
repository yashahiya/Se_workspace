#include <stdio.h>

struct Student {
    char name[100];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf("%99s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    
    printf("\n Student Details \n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}