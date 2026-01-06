#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

const char *solve(int x, int y);

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);

        printf("%s\n", solve(x, y));
    }

    return 0;
}

const char *solve(int x, int y) {
    int64_t sum = x + y;
    if (x + y > 6) {
        return "YES";
    }

    return "NO";
}
