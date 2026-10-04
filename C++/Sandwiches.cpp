#include <iostream>
#include <string>
#include <algorithm>

static void solve() {
    int b, h, c;
    std::cin >> b >> h >> c;

    std::cout << std::min(b / 2, h + c);
    std::cout << "\n";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
