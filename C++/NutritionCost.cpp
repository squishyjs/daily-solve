#include <ios>
#include <iostream>
#include <tuple>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>

int solve(int n, int c,
          std::vector<int> &vit,
          std::vector<int> &cost) {
    // cook code
    std::unordered_map<int, int> min_cost;
    min_cost.reserve(n);
    for (int i = 0; i < n; ++i) {
        auto it = min_cost.find(vit[i]);
        if (it == min_cost.end()) {
            min_cost.emplace(vit[i], cost[i]);
        } else {
            if (cost[i] < it->second) {
                // get max cost (as minimum)
                it->second = cost[i];
            }
        }
    }
    int ans = 0;
    for (const auto &kv : min_cost) {
        int best = kv.second;
        if (c > best) {
            ans += (c - best);
        }
    }

    return ans;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, c;
        std::cin >> n >> c;
        std::vector<int> vit(n), cost(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> vit[i];
        }
        for (int i = 0; i < n; ++i) {
            std::cin >> cost[i];
        }

        int res = solve(n, c, vit, cost);
        std::cout << res << std::endl;
    }

    return 0;
}
