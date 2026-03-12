#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr)

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

bool all_zero(int a, int b, int c) {
    return (a == 0) && (b == 0) && (c == 0);
}

std::string solve(int a, int b, int c) {
    while (a > 0) { a--; b -= 2; }
    while (b > 0) { b--; c -= 3; }

    if (all_zero(a, b, c)) {
        return "Yes";
    }

    return "No";
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int x, y, n;
        std::cin >> x >> y >> n;

        std::cout << solve(x, y, n);
        std::cout << "\n";
    }

    return 0;
}
