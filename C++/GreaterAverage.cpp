#include <cstdint>
#include <iostream>
#include <string>

#define fast_io() \
    { std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); }

using u32 = uint32_t;
using u64 = uint64_t;

std::string solve(int a, int b, int c) {

    u32 average = (a + b) / 2;
    if (average > c) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    fast_io();

    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        std::cout << solve(a, b, c);
        std::cout << "\n";
    }
}
