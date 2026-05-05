#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using int64 = long long;
using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

template <typename T>
static void print_container(std::vector<T> &container) {

    for (const auto &x : container) {
        if (x == 0) {
            continue;
        }

        std::cout << x << " ";
    }
}

static void findPeaks(const std::vector<int> &arr, int n) {
    // TODO:
    std::vector<int> peaks(n);
    // edge cases
    if (arr[1] < arr[0]) { peaks[0] = arr[0]; }
    if (arr[n - 1] > arr[n - 2]) { peaks[n - 1] = arr[n - 1]; }

    // middle peaks
    for (int i = 1; i < n - 1; ++i) {
        int curr = arr[i];
        int prev = arr[i - 1];
        int next = arr[i + 1];

        if (curr > prev && curr > next) {
            peaks[i] = arr[i];
        }
    }

    print_container(peaks);
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

        solve(n, arr);
        std::cout << "\n";
    }

    return 0;
}
