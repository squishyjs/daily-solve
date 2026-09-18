#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int n, const int k) {
    if (k <= n) {
        return 0;
    }

    return 2 * (k - n);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::cout << solve(n, k);
        std::cout << "\n";
    }

    return 0;
}
