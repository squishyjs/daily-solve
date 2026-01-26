#include <stdio.h>

const char *calculator_display() {
    return
        "Welcome to Calculator\n"
        "\n"
        "Choose one operation:\n"
        "1. Add\n"
        "2. Subtract\n"
        "3. Exit\n";
}

int main(void) {
    // begin program
    printf("%s", calculator_display());

    return 0;
}
