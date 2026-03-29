#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;
using u32 = uint32_t;

template <typename T>
T error_msg(const char *msg) {
    std::cerr << msg << std::endl;
    return T {};
}

std::string solve(int x) {
    if (x < 0 || x > 100) {
        return error_msg<std::string>("Invalid input x");
    }

    if (x > 50) {
        return "RIGHT";
    }

    // else
    return "LEFT";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x;
        std::cin >> x;

        std::cout << solve(x);
        std::cout << "\n";
    }

    return 0;
}
