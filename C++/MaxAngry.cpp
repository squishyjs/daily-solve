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

long long solve(int n, int k) {
    if (n == 1) {
        return 0;
    }

    if (k >= n / 2) {
        return n * ((n - 1) / 2);
    }

    int adj = n - 2 * k;
    return (n * (n - 1) / 2) - (adj * (adj - 1) / 2);
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        ll output = solve(n, k);
        std::cout << output << std::endl;
    }

    return 0;
}
