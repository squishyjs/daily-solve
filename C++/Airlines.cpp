#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int x, const int n) {
    // TODO:
    int curr = x * 100;
    if (curr >= n) {
        return 0;
    }

    int diff = n - x;
    if (diff % 100 != 0) {
        return (diff / 100) + 1;
    }

    return diff / 100;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> x >> n;

        std::cout << solve(x, n);
        std::cout << "\n";
    }

    return 0;
}
