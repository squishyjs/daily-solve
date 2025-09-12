#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>

int solve(int n) {
    int base = 200;

    if (n <= 2) {
        return base;
    }

    return 100 * n;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int res = solve(n);
        std::cout << res << std::endl;
    }

    return 0;
}
