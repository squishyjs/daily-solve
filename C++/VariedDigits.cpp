#include <iostream>
#include <string>
#include <algorithm>

static std::string solve() {
    int x; std::cin >> x;
    if (x % 11 == 0) {
        return "NO";
    }

    return "YES";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::cout << solve();
    std::cout << "\n";

    return 0;
}
