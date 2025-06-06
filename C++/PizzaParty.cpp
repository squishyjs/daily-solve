#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <numeric>

int solve(int a, int b) {
    int totalSlices = ((a + 1) * 4) + (3 * b);
    int pizza = 8;
    if (totalSlices % pizza == 0) {
        return totalSlices / pizza;
    }
    return ((totalSlices / pizza) + 1);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    int res = solve(a, b);
    std::cout << res << std::endl;
    return EXIT_SUCCESS;
}
