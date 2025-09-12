#include <cstdlib>
#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>
#include <algorithm>

int solve(int n, std::vector<int> &arr) {
    int passed = 1;       // chef
    int chef = arr[0];

    if (chef == 0) {
        return n;
    }

    int cutoff = chef;
    for (int i = 1; i < n; ++i) {
        if (arr[i] >= cutoff) {
            passed++;
        }
    }

    return passed;
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
