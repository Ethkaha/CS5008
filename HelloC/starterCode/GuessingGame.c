/**
 * Guessing Game Code Along
 *
 * This code along implements a small guessing game in C.
 * The player has to guess a number between 1 and 100.
 * it provides feedback on whether the guess is too high or too low.
 * The game continues until the player guesses the correct number.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generation

// random number - get it

int getRandomNumber(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

// getInput from player

int getInput()
{
    int input = 0;
    scanf("%d", &input); // not safe, fix in future!
    return input;
}

// need Loop that give feed, High or Low or correct

// we need a Loop start or play again

int runGame(int randomNumber)
{
    int guess = 0;
    int attempts = 0;

    while (guess != randomNumber)
    {
        printf("Enter your guess (1-100): ");
        guess = getInput();
        attempts++;

        if (guess < randomNumber)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > randomNumber)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Correct! You guessed the number %d in %d attempts!\n", randomNumber, attempts);
            break;
        }
    }
    return attempts;
}

void startGame()
{
    printf("Welcome to the Guessing Game!\n");
    int choice = 0;

    while (choice != 2)
    {
        printf("1. Play Game\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        choice = getInput();

        if (choice == 1)
        {
            int randomNumber = getRandomNumber(1, 100);
            printf("A random number between 1 and 100 has been generated. Try to guess it!\n");
            runGame(randomNumber);
        }
        else if (choice == 2)
        {
            printf("Thank you for playing! Goodbye!\n");
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }
    }
}

int main()
{
    srand(time(NULL)); // Seed the random number generator
    startGame();
    return 0;
}