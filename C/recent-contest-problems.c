#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>

#define ll long long

const char *start = "START38";
const char *time = "LTIME108";

void print_newline() {
    printf("\n");
}

void solve(int n, const char arr[][15]) {

    int s_count = 0, t_count = 0;
    for (int i = 0; i < n; ++i) {
        const char *curr = arr[i];

        if (strcmp(curr, start) == 0) {
            s_count++;
        }

        if (strcmp(curr, time) == 0) {
            t_count++;
        }
    }

    printf("%d %d", s_count, t_count);
}

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char arr[n][15];
        for (int i = 0; i < n; ++i) {
            scanf("%15s", arr[i]);
        }

        solve(n, arr);
        print_newline();
    }

    return 0;
}
