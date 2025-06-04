#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <numeric>

int solve(int n, int m, int k) {
    if (k == 0) {
        return n * m;
    }
    int minn = (ceil(1.0 * k / n) * n) - k;
    int maxx = (ceil(1.0 * k / m) * m) - k;

    if (minn < maxx) {
        return n * (m - (ceil(1.0 * k / n)));
    }
    return m * (n - (ceil(1.0 * k / m)));
}

int main() {
    int test; std::cin >> test;
    while (test--) {
        int n, m, k;
        std::cin >> n >> m >> k;
        int res = solve(n, m, k);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
