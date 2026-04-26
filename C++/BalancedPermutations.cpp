#include <cstdint>
#include <cstdlib>
#include <ios>
#include <iostream>
#include <system_error>
#include <vector>

// otherwise using local resource collector

#ifdef LOCAL
#incldue <chrono>
#include <sys/resource.h>
#endif

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solve(const int n, std::vector<int> &arr) {
    // TODO:
    int count_balanced = 0;
    for (int i = 0; i < n; ++i) {

        int left = 0;
        for (int j = 0; j < i; ++j) {
            if (arr[j] < arr[i]) {
                left++;
            }
        }

        int right = 0;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[i]) {
                right++;
            }
        }

        if (left == right) {
            count_balanced++;
        }
    }

    return count_balanced;
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

    return EXIT_SUCCESS;
}
