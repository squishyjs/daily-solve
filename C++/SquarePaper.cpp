#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static void solve() {
    int a, b;
    std::cin >> a >> b;

    std::cout << (std::min(a, b) * std::min(a, b));
    std::cout << std::endl;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
