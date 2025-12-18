#include <math.h>
#include <stdio.h>


const char *check_prime(int n) {
    // edge case
    if (n <= 1) {
        return "NO";
    }

    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return "NO";
        }

        i++;
    }

    return "YES";
}

int main(void) {
    int n;
    scanf("%d", &n);

    const char *output = check_prime(n);
    printf("%s\n", output);
    return 0;
}
