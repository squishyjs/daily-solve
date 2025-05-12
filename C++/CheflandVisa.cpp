#include <cstdlib>
#include <iostream>
#include <string>

std::string solve(int x1, int x2, int y1, int y2, int z1, int z2) {
    if (x2 >= x1 && y2 >= y1 && z2 <= z1) {
        return "YES";
    }
    return "NO";
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x1, x2, y1, y2, z1, z2;
        std::cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        std::string res = solve(x1, x2, y1, y2, z1, z2);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
