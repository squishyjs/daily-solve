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

u32 solve(int n, std::vector<int> &arr) {
    if (n == 2) { return 0; }

    std::sort(arr.begin(), arr.end());

    return std::min(arr[n - 2] - arr[0], arr[n - 1] - arr[1]);
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
