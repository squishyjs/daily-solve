#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <limits>

int solve(int a, int b, int c) {
    return a != b or b != c or a != c;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int a, b, c;
        std::cin >> a >> b >> c;
        int res = solve(a, b, c);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
