#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int luckyNumber, guess;
    int maxAttempts = 5; // Maximum number of attempts

    // Seed the random number generator
    srand(time(NULL));
    luckyNumber = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Lucky Number Guessing Game!\n");
    printf("I have picked a lucky number between 1 and 100.\n");
    printf("You have %d attempts to guess it!\n", maxAttempts);

    // Loop to allow the user to guess the lucky number
    for (int attempt = 1; attempt <= maxAttempts; attempt++) {
        printf("Attempt %d: Enter your guess: ", attempt);
        scanf("%d", &guess);

        // Check if the guess is correct
        if (guess == luckyNumber) {
            printf("Congratulations! You've guessed the lucky number %d correctly!\n", luckyNumber);
            break; // Exit the loop if guessed correctly
        } else if (guess < luckyNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        // Display a hint if it's the last attempt
        if (attempt == maxAttempts) {
            printf("Sorry! You've used all your attempts. The lucky number was %d.\n", luckyNumber);
        }
    }

    return 0;
}
