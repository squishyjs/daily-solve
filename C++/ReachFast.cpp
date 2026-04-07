#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

int solve(int a, int b, int k) {
    int diff = abs(a - b);

    if (diff % k == 0) {
        return diff / k;
    }

    return (diff / k) + 1;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b, k;
        std::cin >> a >> b >> k;

        std::cout << solve(a, b, k);
        std::cout << "\n";
    }

    return 0;
}
