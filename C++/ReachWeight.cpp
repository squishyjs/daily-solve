#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int n) {
    if (n % 2 == 0) {
        return (n / 2) * 30;
    }

    int small = n % 2;
    return (small * 20) + (n / 2 * 30);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

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
