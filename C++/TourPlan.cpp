#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static int solve(const int x, const int y, const int z) {
    // TODO:
    if (z <= 50) {
        return x;
    }

    return x + (z - 50) * y;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int x, y, z;
    std::cin >> x >> y >> z;

    std::cout << solve(x, y, z);
    std::cout << "\n";

    return 0;
}
