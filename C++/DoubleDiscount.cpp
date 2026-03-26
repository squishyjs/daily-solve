#include <chrono>
#include <climits>
#include <cstdint>
#include <functional>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

int64 solve(int n, int k,
            std::vector<int> &price,
            std::vector<int> &taste) {

    int best_taste = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int total;
            int pa = price[i], pb = price[j];
            int tt = taste[i] + taste[j];

            total = pa + pb - std::min(std::max(pa, pb) / 2, 100);

            if (total <= k) {
                best_taste = std::max(best_taste, tt);
            }
        }
    }

    return best_taste;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> price(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> price[i];
        }

        std::vector<int> taste(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> taste[i];
        }

        std::cout << solve(n, k, price, taste);
        std::cout << "\n";
    }

    return 0;
}
