#include <cstdint>
#include <ios>
#include <iostream>
#include <algorithm>
#include <vector>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

int64 solve(int a, int b, int c) {
    return std::max(a, std::max(b, c));
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    // begin test cases
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        std::cout << solve(a, b, c);
        std::cout << "\n";
    }

    return 0;
}
