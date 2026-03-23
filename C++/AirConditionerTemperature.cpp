#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

std::string solve(int a, int b, int c) {
    int max = b;
    int min = std::max(a, c);

    if (min <= max) {
        return "Yes";
    }

    return "No";
}

int main(void) {
    // fast io
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

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
