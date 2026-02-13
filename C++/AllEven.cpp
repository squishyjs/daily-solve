#include <cstdint>
#include <future>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);

using in64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

bool is_odd(int x) {
    return x % 2 != 0;
}

bool is_even(int x) {
    return x % 2 == 0;
}

std::string solve(int n, std::vector<int> &arr) {
    // rules:
    // odd + odd = even
    // odd + even = odd
    // even + odd = odd
    // even + even = even

    int sum = std::accumulate(arr.begin(), arr.end(), 0);
    if (is_even(sum)) {
        return "Yes";
    }

    int odd = 0, even = 0;
    for (int i = 0; i < n; ++i) {
        if (is_odd(arr[i])) {
            odd++;
        } else {
            even++;
        }
    }

    if (is_odd(odd)) {
        return "No";
    }

    return "Yes";
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
