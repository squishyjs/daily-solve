#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

#define OPTION_1 300
#define OPTION_2(X) (100 + 4 * (X))

int64 solve(int x) {
    if (OPTION_2(x) < OPTION_1) {
        return 100 + (4 * x);
    }

    return OPTION_1;
}

int main(void) {
    int x;
    std::cin >> x;

    std::cout << solve(x);
    std::cout << "\n";

    return 0;
}
