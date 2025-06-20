#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <numeric>

int solve(int n) {
    if (n % 3 == 0) {
        return 0;
    }
    return 1;
}

int main() {
    // int t; std::cin >> t;
    // while (t--) {
    //     int n
    // }
    int n; std::cin >> n;
    int res = solve(n);
    std::cout << res << std::endl;
    return EXIT_SUCCESS;
}
