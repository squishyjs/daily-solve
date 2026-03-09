#include <cstdint>
#include <exception>
#include <ios>
#include <iostream>
#include <algorithm>
#include <memory>
#include <vector>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

int64 solve(int n) {
    // TODO:
    return (n / 2) * ((n / 2) + 1);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    // begin test cases
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
