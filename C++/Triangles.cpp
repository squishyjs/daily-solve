#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <numeric>

int solve(int a, int b) {
    return 180 - a - b;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        int res = solve(a, b);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
