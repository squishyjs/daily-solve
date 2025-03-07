#include <iostream>


int solve(int x, int y) {
    if (x >= y) {
        return 0;
    }
    return ((y % x == 0) ? (y / x - 1) : (y / x));
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << solve(x, y) << std::endl;
    return 0;
}
