#include <cstdint>
#include <functional>
#include <ios>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n, const int x,
                 const int k, const std::vector<int> &arr) {
    std::map<int, int, std::greater<int>> hmap;

    for (const int &x : arr) {
        hmap[x]++;
    }

    int eligible = 0, clusters = 0;
    for (const auto &p : hmap) {
        if (clusters == k) {
            break;
        }

        // get the num of candidates for that cluster
        eligible += p.second;
        clusters++;
    }

    return std::min(eligible, x);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x, k;
        std::cin >> n >> x >> k;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::cout << solve(n, x, k, arr);
        std::cout << "\n";
    }

    return 0;
}
