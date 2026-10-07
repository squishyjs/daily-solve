#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int n, const std::vector<int> &arr) {
    int min = INT_MAX, total = 0;
    for (const int &x : arr) {
        total += x;

        if (x < min)
        {
            min = x;
        }
    }

    return total-min;
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
