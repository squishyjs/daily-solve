#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);                     \

using u32 = uint32_t;
using u64 = uint64_t;
using int64 = long long;

int64 solve(int n, int x, int k) {
    // edge cases
    if (x == k) {
        return 1;
    }

    if (x > k) {
        return 0;
    }

    return std::min((k / x), n);
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n, x, k;
        std::cin >> n >> x >> k;

        std::cout << solve(n, x, k);
        std::cout << "\n";
    }

    return 0;
}
