#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using int64 = long long;

int fastest_vehicle(int x, int y) {
    return std::min(x, y);
}

std::string solve(int x, int y) {
    if (x == y) {
        return "SAME";
    }

    std::unordered_map<int, std::string> vehicle {
        {x, "BIKE"},
        {y, "CAR"}
    };

    return vehicle[fastest_vehicle(x, y)];
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
