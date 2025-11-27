// #include <bits/stdc++.h>
#include <array>
#include <climits>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <numeric>
#include "limits.h"

#define ll long long
#define fastIO                                                    \
    std::ios::sync_with_stdio(false);                             \
    std::cin.tie(NULL);                                           \
    std::cout.tie(NULL);                                          \
    // std::cout.precision(std::numeric_limits<double>);


long long solve(int n,
                std::vector<int>& arrival,
                std::vector<int>& departure)
{
    int max_hotel = INT_MIN;
    // 2 5 6  8 10 12 13
    // 9 6 18 9 11 15 19
    std::unordered_map<int, int> m;
    for (int i = 0; i < n; ++i) {
        for (int j = arrival[i]; j < departure[i]; ++j) {
            // find the time (hour) with the most
            // guests checked in at the same time
            m[j]++;
            max_hotel = std::max(max_hotel, m[j]);
        }
    }

    return max_hotel;
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> arr_a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr_a[i];
        }
        std::vector<int> arr_d(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr_d[i];
        }

        ll output = solve(n, arr_a, arr_d);
        std::cout << output << std::endl;
    }

    return 0;
}
