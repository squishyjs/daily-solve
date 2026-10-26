#include <cstdlib>
#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static int power_grid(const int r, const int c,
                      const int w) {
    return r * c * w;
}

static void solve() {
    int r, c, w;
    std::cin >> r >> c >> w;

    std::cout << power_grid(r, c, w) << "\n";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
