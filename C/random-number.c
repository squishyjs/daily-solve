#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getRandomNumber() {
    static int seed_initialized = 0; // Ensure the random seed is initialized only once to avoid repeating sequences
    if (!seed_initialized) {
        srand((unsigned int)time(NULL)); // Seed the random number generator with the current time
        seed_initialized = 1; // Mark seed as initialized
    }

    int min = 0; // Placeholder for the minimum range value
    int max = 100; // Placeholder for the maximum range value

    // Update the logic to generate a random number in the range [1, 100]

    return (rand() % (max - min + 1)) + min;
}

int main() {
    // Generate and print a random number
    printf("Random Number: %d\n", getRandomNumber());

    return 0;
}
