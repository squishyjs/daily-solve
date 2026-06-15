#include <cmath>
#include <ios>
#include <iostream>

static int solve(const int n) {
    // return std::tgamma(n + 1);
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * solve(n - 1);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::cout << solve(n);
        std::cout << "\n";
    }

    return 0;
}
