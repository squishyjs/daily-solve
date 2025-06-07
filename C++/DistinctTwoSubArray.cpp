#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

int solve(int n, std::vector<int> &arr) {
    int distinct = 2;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] != arr[i + 1]) {
            return distinct;
        }
    }
    return -EXIT_FAILURE;
}

int main () {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        int res = solve(n, arr);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
