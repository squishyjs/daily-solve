#include <stdio.h>

// Function to display the calculator menu
const char* calculatorDisplay() {
    return "Welcome to Calculator\n\n"
           "Choose one operation:\n"
           "1. Add\n"
           "2. Subtract\n"
           "3. Exit\n";
}

// update the Function
const char* calculatorFunction(int user_choice) {
    if (user_choice == 1) {
        return "Let's initiate addition";
    }

    if (user_choice == 2) {
        return "Let's initiate subtraction";
    }

    if (user_choice == 3) {
        return "Exit the program";
    }
}

int main() {
    // Display the calculator menu
    printf("%s", calculatorDisplay());

    // Take user input
    int user_choice;
    printf("Select the operation: ");
    scanf("%d", &user_choice);

    // Process the user's choice
    const char* value = calculatorFunction(user_choice);
    printf("%s\n", value);

    return 0;
}
