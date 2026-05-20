#include <cstdint>
#include <ios>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n, const std::vector<int> &arr) {
    int count = 0;
    std::unordered_map<int, int> hmap;

    // for (const int &x : arr) {
    //     if (hmap[x] < 1) {
    //         count++;
    //         hmap[x]++;
    //     }
    // }
    for (int i = 0; i < n; ++i) {
        if (arr[i] == arr[i + 1]) {
            count++;
        }
    }

    return n - count;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

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
