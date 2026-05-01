#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static void solve() {
    int x, y;
    std::cin >> x >> y;

    int plates_cost = x * 100;
    int extra_cost = (y - x) * 150;

    std::cout << (plates_cost + extra_cost);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
