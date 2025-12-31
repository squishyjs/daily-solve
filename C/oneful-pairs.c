#include <stdio.h>

#define ONEFUL_PAIR 111

const char *solve(int a, int b) {
    if ((a + b + (a * b)) == ONEFUL_PAIR) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    const char *output = solve(a, b);
    printf("%s", output);

    return 0;
}
