#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

typedef enum triangle {
    EQUILATERAL,
    ISOSCELES,
    SCALENE,
    TRIANGLE_COUNT
} Triangle;

const char *triangle_types[TRIANGLE_COUNT] = {
    "Equilateral",
    "Isosceles",
    "Scalene"
};


bool is_equilateral(int a, int b, int c) {
    return a == b && b == c;
}

bool is_isosceles(int a, int b, int c) {
    return (a == b && b != c) ||
            (a == c && a != b) ||
            (b == c && b != a);
}

bool is_scalene(int a, int b, int c) {
    return (a != b && a != c && b != c);
}

const char *solve(int a, int b, int c)
{
    if (is_equilateral(a, b, c))
        return triangle_types[EQUILATERAL];

    if (is_isosceles(a, b, c))
        return triangle_types[ISOSCELES];

    return triangle_types[SCALENE];
}

int main(void) {
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);

    const char *out = solve(a, b, c);
    printf("%s", out);
    return 0;
}
