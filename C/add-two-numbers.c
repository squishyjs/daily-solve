#include <stdio.h>

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
