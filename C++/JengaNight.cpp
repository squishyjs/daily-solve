#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);                  \

using int64 = long long;

std::string solve(int n, int x) {
    return (x % n == 0) ? "YES" : "NO";
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;

        std::cout << solve(n, x);
        std::cout << "\n";
    }

    return 0;
}
