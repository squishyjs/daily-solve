#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <numeric>

bool isEven(int x) {
    return x % 2 == 0;
}

int solve(int x, int y) {
    if (std::gcd(x, y) > 1)
    {
        return 0;
    }

    if ((std::gcd(x+1, y) > 1) || (std::gcd(x, y+1) > 1))
    {
        return 1;
    }

    return 2;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;
        int res = solve(x, y);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
