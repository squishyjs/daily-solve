#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n, int k) {
    // cook
    if (n == k) {
        return 0;
    }

    int a = std::abs(n - k);
    int b = n - (n + 1 - k) + 1;
    return std::min(a, b);
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        int res = solve(n, k);
        std::cout << res << std::endl;
    }

    return 0;
}
