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


std::string solve(int a, int b) {
    if (a <= (b - a) || a == b) {
        return "YES";
    }

    return "NO";
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        std::string output = solve(a, b);
        std::cout << output << std::endl;
    }

    return 0;
}
