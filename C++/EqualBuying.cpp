#include <cstdint>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

std::string solve(int n) {

    const int total = 3;
    if (n % total == 0) {
        return "Yes";
    }

    return "No";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    // int t;
    // std::cin >> t;
    // while (t--) {
        int n;
        std::cin >> n;

        std::cout << solve(n);
        std::cout << "\n";
    // }

    return 0;
}
