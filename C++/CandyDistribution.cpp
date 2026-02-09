#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);

using u32 = uint32_t;
using u64 = uint64_t;
using int64 = long long;

std::string solve(int n, int m) {
    if (n % m != 0) {
        return "No";
    }

    return ((n / m % 2) == 0) ? "Yes" : "No";
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::cout << solve(n, m);
        std::cout << "\n";
    }

    return 0;
}
