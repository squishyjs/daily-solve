#include <climits>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include "limits"

#define ll long long
#define fastIO                                                    \
    std::ios::sync_with_stdio(false);                             \
    std::cin.tie(NULL);                                           \
    std::cout.tie(NULL);                                          \


long long solve(int n, std::vector<int> &arr) {
    if (n == 2) {
        return arr[0] + arr[1];
    }

    int min_cost = INT_MAX;
    #pragma omp parallel for reduction(std::min:min_cost)
    for (int i = 0; i < n - 1; ++i) {
        min_cost = std::min(min_cost, arr[i] + arr[i + 1]);
    }

    return min_cost;
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int output = solve(n, arr);
        std::cout << output << std::endl;
    }

    return 0;
}
