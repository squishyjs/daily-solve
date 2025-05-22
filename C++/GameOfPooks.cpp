#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int solve(int n) {
    if (n == 1) {
        return 1;
    }
    if (n < 4 && n > 1) {
        return n - 1;
    }
    int numberOfRows = n;
    return numberOfRows;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        int res = solve(n);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
