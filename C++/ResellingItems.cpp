#include <cstdint>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

int64 solve(int n, int k, std::vector<int> &arr) {
    std::sort(arr.rbegin(), arr.rend());

    int profit = 0;
    int index = 0;
    for (const int x : arr) {
        if (index < k) {
            if (x > 5) {
                // apply discount
                profit += x - 5;
            }
        } else {
            if (x > 10) {
                profit += x - 10;
            }
        }

        index++;
    }

    return profit;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::cout << solve(n, k, arr);
        std::cout << "\n";
    }

    return 0;
}
