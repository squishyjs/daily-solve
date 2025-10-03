#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

bool is_prime(int x) {
    if (x <= 1) {
        return false;
    }

    for (int i = 2; i <= x / 2; ++i) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int solve(int n, std::vector<int> &arr) {
    // cook
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (is_prime(arr[i] + arr[j])) {
                count++;
            }
        }
    }

    return count;
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
