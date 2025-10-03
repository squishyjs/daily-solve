#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n,
          int k,
          std::vector<int> &prices)
{
    std::sort(prices.begin(), prices.end(), std::greater<int>());       // largest to smallest

    int cost = 0;
    for (int i = 0; i < k; ++i) {
        cost += prices[i];
    }

    return cost;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> prices(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> prices[i];
        }

        int res = solve(n, k, prices);
        std::cout << res << std::endl;
    }

    return 0;
}
