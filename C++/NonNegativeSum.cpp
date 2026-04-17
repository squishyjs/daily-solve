#include <cstdint>
#include <functional>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int64 solve(int n, std::vector<int> &arr) {
    // TODO:
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    int sum = 0, count = 0;
    for (const int x : arr) {
        if (sum + x >= 0) {
            sum += x;
            count++;
            continue;
        }

        // else
        break;
    }

    return count;
}

int main(void) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

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
