#include <string>
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>

#define debug(x) cerr << (#x) << " " << (x) << endl
#define endl '\n'
#define all(_a) _a.begin(), _a.end()
#define fast() \
    { std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); }

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

std::string solve(int a, int b, int x, int y) {
    int total_power = a * b;
    int helium_3 = x * y;

    if (helium_3 >= total_power) {
        return "YES";
    }

    return "NO";
}

int main() {
    fast();

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int a, b, x, y;
        std::cin >> a >> b >> x >> y;

        std::cout << solve(a, b, x, y);
        std::cout << "\n";
    }

    return 0;
}
