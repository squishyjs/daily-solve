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


bool solve(int a, int b) {
    return a == b;
}

int32_t main() {
    fastIO;

    // int t;
    // std::cin >> t;
    // while (t--) {

    // }
    int a, b;
    std::cin >> a >> b;

    if (solve(a, b)) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    std::cout << std::endl;

    return 0;
}
