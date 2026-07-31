#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int x, const int y, const int z) {
    if (z <= y) {
        return -1;
    }

    int difference = z - y;
    int required = x / difference;

    if (x % difference != 0) {
        required++;
    }

    return required;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x, y, z;
        std::cin >> x >> y >> z;
        std::cout << solve(x, y, z);
        std::cout << "\n";
    }

    return 0;
}
