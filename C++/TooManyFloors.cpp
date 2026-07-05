#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int get_floor(const int room) {
    return (room - 1) / 10 + 1;
}

static int solve(const int x, const int y) {
    int chef = get_floor(x), chefina = get_floor(y);

    if (chef == chefina) {
        return 0;
    }

    return std::abs(chef - chefina);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

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
