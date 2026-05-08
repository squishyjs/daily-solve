#include <cstdint>
#include <ios>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n, const int x,
                 const std::vector<int> &arr) {
    int largest = 0;
    for (const int &jar : arr) {
        if (jar % x == 0) {
            largest = std::max(largest, jar);
        }
    }

    return largest;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::cout << solve(n, x, arr);
        std::cout << "\n";
    }

    return 0;
}
