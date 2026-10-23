#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int a, const int b,
                 const int p, const int e) {
    return (a * p) + (b * e);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b, p, e;
    std::cin >> a >> b >> p >> e;
    std::cout << solve(a, b, p, e);
    std::cout << "\n";

    return 0;
}
