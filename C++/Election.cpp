#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static void solve() {
    int n, k;
    std::cin >> n >> k;

    int req = 0, need = n / 2 + 1;
    if (k < need) {
        req = need - k;
    }

    std::cout << req << "\n";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
