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


void solve(int n) {
    ll minimum = n - 2;
    std::cout << minimum << " ";

    ll maximum = (n - 1) * (n - 2) / 2;
    std::cout << maximum;
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        solve(n);
        std::cout << std::endl;
    }

    return 0;
}
