#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static std::string solve(const float a, const float b,
                         const float x, const float y) {
    float chef = a / x, chefina = b / y;

    if (chef == chefina) {
        return "Both";
    }

    return (chef < chefina) ? "Chef" : "Chefina";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        float a, b, x, y;
        std::cin >> a >> b >> x >> y;

        std::cout << solve(a, b, x, y);
        std::cout << "\n";
    }

    return 0;
}
