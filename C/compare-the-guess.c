#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber() {
    return rand() % 100 + 1;  // Generate a random number between 1 and 100
}

// Update the giveHint function
const char* giveHint(int number, int guess) {
    if (guess == number) {
        return "Right";
    }

    if (guess > (number + 10) || guess < (number - 10)) {
        return "Cold";
    }

    return "Hot";
}

void runGuess() {
    int secretNumber = getRandomNumber();
    int userGuess;
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &userGuess);

    const char* hint = giveHint(secretNumber, userGuess);
    if (hint == "Right") {
        printf("You guessed it Right!\n");
    } else {
        printf("%s\n", hint);
    }
}

int main() {
    srand(time(0)); // Initialize the random seed
    runGuess();
    return 0;
}
