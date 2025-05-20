#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string solve(int x, int y, int xr, int yr, int days) {
    int foodSupply  = x / xr;
    int waterSupply = y / yr;
    int maxSupply = std::min(foodSupply, waterSupply);

    return (maxSupply < days) ? "NO" : "YES";
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int x, y, xr, yr, days;
        std::cin >> x >> y >> xr >> yr >> days;
        std::string res = solve(x, y, xr, yr, days);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
