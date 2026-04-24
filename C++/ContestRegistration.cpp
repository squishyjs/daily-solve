#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;

static void solve() {
    int x, y;
    std::cin >> x >> y;

    if (y <= x) {
        std::cout << 0;
    } else {
        std::cout << 100;
    }

    std::cout << "\n";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
