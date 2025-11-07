#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int w, int p, int k) {
    // cooook
    int wooden = 2;
    int plastic = 1;

    if (k <= w) {
        return k * wooden;
    }

    return (((k - w) * plastic) + (w * wooden));
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int w, p, k;
        std::cin >> w >> p >> k;

        int res = solve(w, p, k);
        std::cout << res << std::endl;
    }

    return 0;
}
