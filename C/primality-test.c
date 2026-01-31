#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define ll long long

const char *solve(int n) {
    if (n <= 1) {
        return "no";
    }
    if (n == 2) {
        return "yes";
    }

    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return "no";
        }
    }

    return "yes";
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);

        printf("%s", solve(n));
        printf("\n");
    }

    return 0;
}
