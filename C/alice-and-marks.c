#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const char *solve(int x, int y) {
    if (x >= 2 * y) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);

    const char *output = solve(x, y);
    printf("%s", output);
    return EXIT_SUCCESS;
}
