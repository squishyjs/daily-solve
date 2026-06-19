#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static void solve() {
    int x, y;
    std::cin >> x >> y;

    if (static_cast<int>(std::abs(x - y)) <= 2) {
        std::cout << "Interesting\n";
    } else {
        std::cout << "Boring\n";
    }
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
