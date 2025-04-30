#include <iostream>

int solve(int stocks, int original, int future) {
    return (future * stocks - original * stocks);
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x, y, z; std::cin >> x >> y >> z; 
        int stocks = solve(x, y, z);
        std::cout << stocks << std::endl;
    }

    return 0;
}
