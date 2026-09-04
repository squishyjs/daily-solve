#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int n, const int k, const std::vector<int> &arr) {
    int maxSum = 0;
    for (int i = 0; i <= k; ++i) {
        int left = i;
        int right = k - i;

        int sum = 0;
        for (int j = left; j < n - right; ++j) {
            sum += arr[j];
        }

        maxSum = std::max(maxSum, sum);
    }

    return maxSum;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

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
