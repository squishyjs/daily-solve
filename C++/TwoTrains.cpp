#include <climits>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>

int solve(int n, std::vector<int> &arr) {
    int max_time = -1;
    int sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        sum += arr[i];
        max_time = std::max(max_time, arr[i]);
    }

    return max_time + sum;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n - 1; ++i) {
            std::cin >> arr[i];
        }

        int res = solve(n, arr);
        std::cout << res << std::endl;
    }

    return 0;
}
