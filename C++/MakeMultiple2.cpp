#include <iostream>
#include <string>
#include <algorithm>

#define ll long long
#define fastIO                                                    \
    std::ios::sync_with_stdio(false);                             \
    std::cin.tie(NULL);                                           \
    std::cout.tie(NULL);                                          \
    // std::cout.precision(std::numeric_limits<double>);

static int solve(const int n) {
    if (n % 3 == 0) {
        return 0;
    }

    if (n % 15 == 1 || n % 15 == 4 || n % 15 == 7) {
        return 2;
    }

    return 1;
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << solve(n);
        std::cout << "\n";
    }

    return 0;
}
