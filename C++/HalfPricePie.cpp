#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static int solve(const int n, std::vector<int> &arr) {
    int total = 0;
    int minPair = arr[0] + arr[1];

    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        minPair = std::min(minPair, arr[i] + arr[i + 1]);
    }

    return total - (minPair / 2);
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
