#include <cstddef>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include "limits"

#define fastIO                                                    \
    std::ios::sync_with_stdio(false);                             \
    std::cin.tie(NULL);                                           \
    std::cout.tie(NULL);                                          \
    // std::cout.precision(std::numeric_limits<double>);


int solve(int n, std::vector<int> &arr) {
    long long pos = 0, neg = 0;

    for (const int &x : arr) {
        if (x < 0) {
            neg++;
        } else if (x > 0) {
            pos++;
        }
    }

    long long p_pair = pos * (pos - 1) / 2 + neg * (neg - 1) / 2;

    return p_pair;
}

int main() {
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
