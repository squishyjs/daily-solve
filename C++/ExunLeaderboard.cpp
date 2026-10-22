#include <cstdlib>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static void solve() {
    int x, y;
    std::cin >> x >> y;

    int res = std::abs(x - y) - 1;
    std::cout << res;
    std::cout << "\n";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
