// #include <bits/stdc++.h>
#include <cstdint>
#include <ios>
#include <iostream>
#include <ostream>
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


ll solve(int n) {
    int d, t;
    int max_speed = 0, pos;
    for (int i = 0; i < n; ++i) {
        std::cin >> d >> t;

        int curr_speed = d / t;
        if (curr_speed > max_speed) {
            max_speed = curr_speed;
            pos = i + 1;
        }
    }

    return pos;
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int output = solve(n);
        std::cout << output << std::endl;
    }

    return 0;
}
