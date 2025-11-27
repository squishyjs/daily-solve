// #include <bits/stdc++.h>
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
    // std::cout.precision(std::numeric_limits<double>);


long long solve(int x, int y, int z) {
    // cook
    return std::min(y * 2, z * 2);
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int x, y, z;
        std::cin >> x >> y >> z;

        ll output = solve(x, y, z);
        std::cout << output << std::endl;
    }

    return 0;
}
