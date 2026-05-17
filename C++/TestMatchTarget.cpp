#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int x, const int y, const int z) {
    int australia = x + z, india = y;

    // edge
    if (india > australia) {
        return 0;
    }

    int victory = 1;
    return (australia - india) + victory;
}

static void test() {
    int x, y, z;
    std::cin >> x >> y >> z;

    std::cout << solve(x, y, z);
    std::cout << "\n";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // solve a test case
    test();

    return 0;
}
