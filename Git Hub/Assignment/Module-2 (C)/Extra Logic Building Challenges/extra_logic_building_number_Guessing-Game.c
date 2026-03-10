#include <stdio.h>
#include<conio.h>
int main() {
    int secretNumber = 14;
    int guess;
    int attempts = 0;
    int maxAttempts = 5;

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("\n🎉 Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } 
        else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } 
        else {
            printf("Too high! Try again.\n");
        }

        printf("Attempts remaining: %d\n\n", maxAttempts - attempts);
    }

    if (guess != secretNumber) {
        printf("\n❌ Game Over! The correct number was %d.\n", secretNumber);
    }

    return 0;
}