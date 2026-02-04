#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define ll long long

typedef uint32_t u32;

u32 solve(int x, int y) {
    u32 months = 0L, total = 0L;
    while ( true ) {
        if (total + x >= y) {
            return months;
        }
        total += x;
        months++;
    }

    return months;
}

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        u32 x, y;
        scanf("%u %u", &x, &y);

        u32 output = solve(x, y);

        printf("%u\n", output);
    }

    return 0;
}
