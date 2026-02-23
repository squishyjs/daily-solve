#include <climits>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

#define REQUIRED 21

int64 solve(int a, int b) {
    int curr_total = a + b;
    if (REQUIRED - curr_total <= 10) {
        return REQUIRED - curr_total;
    }

    return -1;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;

        std::cout << solve(a, b);
        std::cout << "\n";
    }

    return 0;
}
