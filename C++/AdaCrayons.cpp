#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static uint_fast32_t solve(const std::string& s) {
    int groups = 1;
    for (int i = 1; i < (int)s.length(); ++i) {
        if (s[i] != s[i - 1]) groups++;
    }
    return groups / 2;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;

        std::cout << solve(s);
        std::cout << "\n";
    }

    return 0;
}
