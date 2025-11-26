// #include <bits/stdc++.h>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <tuple>
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


long long solve(int n, int s) {
    ll count = 0;
    if (s % 2) {
        count++;
        s--;
    }

    count += (s / n);

    if ((s > 0) && (s % n)) {
        count++;
    }

    return count;
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int s, n;
        std::cin >> s >> n;
        ll output = solve(n, s);
        std::cout << output << std::endl;
    }

    return 0;
}
