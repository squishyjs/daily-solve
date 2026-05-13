#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n, const std::vector<int> &arr) {
    // copy
    std::vector<int> order = arr;
    std::sort(order.begin(), order.end());

    u32 prize = 0;
    for (int i = 1; i < n; ++i) {
        prize += order[i];
    }

    return prize;
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
