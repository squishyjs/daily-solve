#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

int64 solve(int x, int y) {
    return y + (x - 1);
}

int main(void) {
    int x, y;
    std::cin >> x >> y;

    std::cout << solve(x, y);
    std::cout << "\n";

    return 0;
}
