#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n, std::vector<int> &arr) {
    // get min element
    const auto min = std::min_element(arr.begin(), arr.end());

    int count = 0;
    for (const int &x : arr) {
        if (x != *min) {
            count++;
        }
    }

    return count;
}

class Solution {
public:
    int countNonMinimum(std::vector<int> &nums) {
        // get min element
        const auto min = std::min_element(nums.begin(), nums.end());

        int count = 0;
        for (const int &x : nums) {
            if (x != *min) {
                count++;
            }
        }

        return count;
    }
};

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
