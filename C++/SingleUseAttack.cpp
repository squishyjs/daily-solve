#include <cmath>
#include <iostream>


int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int h, x, y;
        std::cin >> h >> x >> y;
        int attacks;
        if (y >= h) {
            attacks = 1;
            std::cout << attacks << std::endl;
            continue;
        }
        attacks = std::ceil((h - y) / (x * 1.0)) + 1;
        std::cout << attacks << std::endl;
    }
    return 0;
}
