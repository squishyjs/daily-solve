#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>

static void solve(int n) {
    int x = 1;
    for (int i = 0; i < n; ++i) {
        std::cout << x << std::endl;
        x += 2;
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        solve(n);
    }

    return 0;
}
