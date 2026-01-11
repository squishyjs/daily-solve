#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>

void free_array(int *arr) {
    free(arr);
}

static int *solve(const int n, const int arr[]) {
    int *sol = malloc(n * sizeof(int));
    if (!sol) { return NULL; }

    const int tail = n - 1;
    for (int i = 0; i < n; ++i) {
        sol[i] = arr[tail - i];
    }

    return sol;
}

int main(void) {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int *output = solve(n, arr);
    // check malloc
    if (!output) {
        fprintf(stderr, "Memory allocatin failed.\n");
        return EXIT_FAILURE;
    }

    // print array
    for (int i = 0; i < n; ++i) {
        printf("%d", output[i]);
    }

    printf("\n");
    // prevent memory leak
    free_array(output);

    return 0;
}
