#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <algorithm>

std::string solve(int z, int y, int a, int b, int c) {
    int remaining = z - y;
    int totalCost = a + b + c;

    if (remaining >= totalCost) {
        return "YES";
    }
    return "NO";
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int z, y, a, b, c;
        std::cin >> z >> y >> a >> b >> c;
        std::string res = solve(z, y, a, b, c);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
