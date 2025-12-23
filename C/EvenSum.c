#include <stdio.h>
#include <stdbool.h>


bool solve(int a, int b) {
    return ((a + b) % 2 == 0);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if (solve(a, b))
    {
        printf("%s", "YES");
    }
    else
    {
        printf("%s", "NO");
    }
    return 0;
}
