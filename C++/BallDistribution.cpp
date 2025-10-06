// #include "bits-stdc++.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n, int m, std::vector<int> &arr) {
    // cook
    int total = 0;
    for (const int &x : arr) {
        total += x;
    }

    int ans = n * (m - 1);
    if (total - ans < 0) {
        return 0;
    }

    return total - ans;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;
        std::vector<int> arr(m);
        for (int i = 0; i < m; ++i) {
            std::cin >> arr[i];
        }

        int res = solve(n, m, arr);
        std::cout << res << std::endl;
    }

    return 0;
}
