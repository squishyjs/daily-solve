#include <stdio.h>
#include <stdint.h>

#include <math.h>
#include <stdlib.h>

typedef uint32_t u32;
typedef uint64_t u64;

void print_new_line() {
    printf("\n");
}

int solve(int a, int b) {
    return a + b;
}

int main() {
    int t;  // test cases
    scanf("%d", &t);

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d", solve(a, b));

        print_new_line();
    }

    return 0;
}
