#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

const char *solve(int x) {
    #define MIN_WATER 2000

    if (x >= MIN_WATER) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x;
        scanf("%d", &x);

        printf("%s\n", solve(x));
    }

    return EXIT_SUCCESS;
}
