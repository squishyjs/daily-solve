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


long long solve(int r, int g, int b) {
    int coins = 0;
    ll min_gem = std::min({r, g, b});
    coins += (min_gem * 10);

    // subtract from gems
    r -= min_gem;
    g -= min_gem;
    b -= min_gem;

    int total = r + g + b;
    coins += (total * 3);

    return coins;
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int r, g, b;
        std::cin >> r >> g >> b;

        ll output = solve(r, g, b);
        std::cout << output << std::endl;
    }

    return 0;
}
