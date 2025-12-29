#include <stdio.h>


int main(void) {
    int n;
    scanf("%d", &n);

    while (n > 0) {
        int x = n % 10;
        printf("%d", x);

        n /= 10;
    }
    return 0;
}
