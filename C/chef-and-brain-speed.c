#include <stdio.h>
#include <stdbool.h>

const char *solve(int x, int y) {
    if (y > x) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    int lim, curr;
    scanf("%d %d", &lim, &curr);

    printf("%s", solve(lim, curr));

    return 0;
}
