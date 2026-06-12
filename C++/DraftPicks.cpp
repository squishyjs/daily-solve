#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdatomic.h>

static int solve(const int n, const int k) {
    // TODO:
    const long long cycle = 2LL * n;

    const long long q = k / cycle;
    const long long r = k % cycle;

    return q * (k + r + 1) + r;
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
