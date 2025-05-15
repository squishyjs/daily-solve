#include <cstdlib>
#include <iostream>
#include <string>

std::string solve(int x, int y, int z) {
    if (x + y <= z) {
        return "YES";
    }
    return "NO";
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int x, y, z;
        std::cin >> x >> y >> z;
        std::string res = solve(x, y, z);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
