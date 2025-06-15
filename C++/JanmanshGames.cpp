#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <numeric>

std::string solve(int x, int y) {
    if ((x +y ) % 2 == 0) {
        return "janmansh";
    }
    return "jay";
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;
        std::string res = solve(x, y);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
