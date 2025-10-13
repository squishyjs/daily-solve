#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n, std::vector<int> &arr) {
    int max_score = 0;
    // for (int i = 0; i < n - 1; i += 2) {
    //     // std::cout << "The sum is: " << std::abs(arr[i] - arr[i + 1]);
    //     if (std::abs(arr[i] - arr[i + 1]) > 0) {
    //         max_score++;
    //     }
    //     // std::cout << std::endl;
    // }

    int zeros = 0, ones = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            zeros++;
        } else {
            ones++;
        }
    }

    max_score = std::min(ones, zeros);

    return max_score;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int res = solve(n, arr);
        std::cout << res << std::endl;
    }

    return 0;
}
