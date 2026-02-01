#include <stdio.h>
#include <stdbool.h>

#define ll long long

void print_newline();
int solve(int x, int y, int z) {

    int bullet_time = y / x;

    if (z <= bullet_time) {
        return 0;
    }

    return z - bullet_time;
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        printf("%d", solve(x, y, z));

        print_newline();
    }

    return 0;
}

void print_newline() {
    printf("\n");
}
