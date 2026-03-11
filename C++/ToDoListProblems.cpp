#include <cstdint>
#include <iostream>
#include <vector>
#include <string>

using int64 = long long;
using u32 = uint32_t;

u32 solve(int n, std::vector<int> &arr) {
    int count = 0;
    for (const int &x : arr) {
        if (x >= 1000) {
            count++;
        }
    }

    return count;
}

int main(void) {
    // fast io
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
