#include <cstdint>
#include <iostream>
#include <vector>
#include <string>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

std::string solve(int a, int b, int c) {
    int count = 0;
    if (a == 0) { count++; }
    if (b == 0) { count++; }
    if (c == 0) { count++; }

    if (count >= 2) {
        return "Water filling time";
    }

    return "Not now";
}

int main(void) {
    // c++ fast io
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

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
