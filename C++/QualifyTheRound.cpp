#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

std::string has_qualified(const int a, const int b) {
    if (b >= a) {
        return "Qualify";
    }

    return "NotQualify";
}

static std::string solve(const int x, const int a, const int b) {
    int required = x;
    int completed = a + (2 * b);

    return has_qualified(required, completed);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x, a, b;
        std::cin >> x >> a >> b;

        std::cout << solve(x, a, b);
        std::cout << "\n";
    }

    return 0;
}
