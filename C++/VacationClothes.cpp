#include <cstdint>
#include <iostream>
#include <algorithm>
#include <string>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

int64 solve(int n) {
    if (n < 7) {
        return n;
    }

    return 7;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;

    {
        std::cout << solve(n);
        std::cout << "\n";
    }

    return 0;
}
