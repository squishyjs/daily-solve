#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define fastIO                               \
    std::ios_base::sync_with_stdio(false);   \
    std::cin.tie(NULL);                      \
    std::cout.tie(NULL);                     \

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static std::string solve(const int n, const std::vector<int> &arr) {
    // sort container
    std::vector<int> new_arr = arr;
    std::sort(new_arr.begin(), new_arr.end());

    if (new_arr[0] >= new_arr[1]) {
        return "YES";
    }

    return "NO";
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
