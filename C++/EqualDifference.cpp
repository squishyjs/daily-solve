#include <cstdint>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr)

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

// TODO: need to solve
u32 solve(int n, std::vector<int> &arr) {
    // count the number of pairs such that:
    // 1)   1 <= i < j <= N
    // 2)   Ai - Aj = i - j
    u32 pairs = 0;
    std::unordered_map<int, int> umap;
    for (int i = 0; i < n; ++i) {
        arr[i] = arr[i] - i;

        umap[arr[i]]++;
    }

    for (auto &pair : umap) {
        int k = pair.second;
        if (k >= 2) {
            pairs += (k * (k - 1) / 2);
        }
    }

    return pairs;
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::cout << solve(n, arr);
        std::cout << "\n";
    }

    return 0;
}
