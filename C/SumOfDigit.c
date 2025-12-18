#include <stdio.h>
#include <stdbool.h>


int solve(int n) {
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;

        n /= 10;
    }

    return sum;
}


int main(void) {
    int n;
    scanf("%d", &n);

    int output = solve(n);
    printf("%d", output);
    return 0;
}
