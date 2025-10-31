#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n, int x) {
    int profits = 0;
    for (int i = 1; i <= n; ++i) {      // was i <= x
        if (i > x) {                    // was i >= x
            profits += (i - x);         // was profits += i and extra cogs/customers math
        }
    }
    return profits;                     // no need to subtract late
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;

        int res = solve(n, x);
        std::cout << res << std::endl;
    }

    return 0;
}
