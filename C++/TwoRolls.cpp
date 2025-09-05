#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>

const int target = 50;

std::string solve(int x, int y) {
    int min_dice_range = y * 2;
    int max_dice_range = (y + 5) * 2;

    int dist = target - x;
    if (dist <= max_dice_range && dist >= min_dice_range) {
        return "Yes";
    }

    return "No";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;
        std::string res = solve(x, y);

        std::cout << res << std::endl;
    }

    return 0;
}
