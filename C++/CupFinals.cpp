#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string solve(int x, int y, int d) {

    int difference = abs(x - y);
    if (difference <= d) {
        return "YES";
    }
    return "NO";
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int x, y, d;
        std::cin >> x >> y >> d;
        std::string res = solve(x, y, d);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
