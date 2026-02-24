#include <iostream>

using int64 = long long;

int64 solve(int x, int y) {

    int64 required = 2 * y;
    if (x < required) {
        return 0;
    }

    return x / required;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;

        std::cout << solve(x, y);
        std::cout << "\n";
    }

    return 0;
}
