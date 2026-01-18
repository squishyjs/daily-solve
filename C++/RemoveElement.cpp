#include <cstddef>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);                  \

using int64 = long long;

std::string solve(int n, int k, std::vector<int> &arr) {
    size_t length = arr.size();

    if (length == 1) {
        return "YES";
    }

    // sort small to large
    std::sort(arr.begin(), arr.end());

    int min = arr[0];

    int count = 0;
    for (int i = 1; i < n; ++i) {
        int curr = arr[i];

        if (curr + min <= k) {
            count++;
        }
    }

    if (count == n - 1) {
        return "YES";
    }

    return "NO";
}


int main(void) {
    fastIO;

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
