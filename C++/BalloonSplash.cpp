#include <iostream>
#include <string>

using int64 = long long;

std::string solve(int x, int y) {
    if (y == x) {
        return "DRAW";
    }

    if (y > x) {
        return "BOB";
    }

    return "ALICE";
}

int main(void) {
    int x, y;
    std::cin >> x >> y;

    std::cout << solve(x, y);
    std::cout << "\n";

    return 0;
}
