#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <cmath>

int solve(int n) {
    int min = sqrt(n);
    return min * min;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        int res = solve(n);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
