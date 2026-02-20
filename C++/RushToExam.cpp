#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

std::string solve(int n, int m, int a) {
    int total_pages = a * n;

    if (total_pages >= m) {
        return "Yes";
    }

    return "No";
}

int main(void) {
    // begin input
    int n, m, a;
    std::cin >> n >> m >> a;

    std::cout << solve(n, m, a);
    std::cout << "\n";

    return 0;
}
