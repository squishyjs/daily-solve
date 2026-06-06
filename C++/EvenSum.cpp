#include <cstdint>
#include <ios>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static std::string solve(const int n, const std::vector<int> &arr) {
    int sum = std::accumulate(arr.begin(), arr.end(), 0);

    for (const int &x : arr) {
        if ((sum - x) % 2 == 0) {
            return "Yes";
        }
    }

    return "No";
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
