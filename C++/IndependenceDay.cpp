#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

std::string solve(int orange, int white, int green) {
    if (std::max(std::max(std::max(orange, white), std::max(white, green)), std::max(orange, green)) 
        > (orange + white + green - std::max(std::max(std::max(orange, white), std::max(white, green)), std::max(orange, green))) + 1) {
        return "NO";
    }
    return "YES";
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int a, b, c;
        std::cin >> a >> b >> c;
        // orange, white, green
        std::string res = solve(a, b,c );
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
