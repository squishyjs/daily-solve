#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);                     \

using u32 = uint32_t;
using u64 = uint64_t;
using int64 = long long;

std::string solve(int n, int x, int y) {

    int64 tm = x * 2;
    int64 bv = y * 2;

    if (n >= tm && n >= bv) {
        return "YES";
    }

    return "NO";
}

int main(void) {
    fastIO;

    // int t;
    // std::cin >> t;
    // while (t--) {
    int n, x, y;
    std::cin >> n >> x >> y;

    std::cout << solve(n, x, y);
    std::cout << "\n";
    // }

    return 0;
}
