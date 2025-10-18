#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n) {
    // cook
    if (n % 2 == 1) {
        return (n / 2) + 1;
    }

    return n / 2;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        // number of lilypads numbered from left to right
        int n;
        std::cin >> n;

        int res = solve(n);
        std::cout << res << std::endl;
    }

    return 0;
}
