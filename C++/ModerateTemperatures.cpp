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
    auto max_temp = std::max_element(arr.begin(), arr.end());
    auto min_temp = std::min_element(arr.begin(), arr.end());

    u32 count = 0;
    for (const int &x : arr) {
        if (x != *max_temp && x != *min_temp) {
            count++;
        }
    }

    return count;
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
