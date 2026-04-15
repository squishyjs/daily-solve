#include <iostream>
#include <string>
#include <algorithm>

static void solve() {
    int a, b, c, x;
    std::cin >> a >> b >> c >> x;

    if (x == a or x == b or x == c) {
        std::cout << "YES" << "\n";
        return;
    }

    std::cout << "NO" << "\n";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
