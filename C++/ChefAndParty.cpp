// #include <bits/stdc++.h>
#include <cstdint>
#include <ios>
#include <iostream>
#include <mutex>
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
    // std::cout.precision(std::numeric_limits<double>);


long long solve(int n, std::vector<int> &arr) {
    std::sort(arr.begin(), arr.end());

    ll attendance = 0, p = 0;
    for (int i = 0; i < n ; ++i) {
        if (arr[i] > attendance) {
            return attendance;
        }
        attendance++;
    }

    return attendance;
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

        ll output = solve(n, arr);
        std::cout << output << std::endl;
    }

    return 0;
}
