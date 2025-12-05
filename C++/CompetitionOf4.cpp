// #include <bits/stdc++.h>
#include <cstdint>
#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
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


long long solve(int x) {
    std::unordered_map<int, int> rank {
        {1, 8000},
        {2, 4000},
        {3, 2000},
        {4, 1000},
    };

    return rank[x];
}

int32_t main() {
    int x;
    std::cin >> x;

    ll output = solve(x);
    std::cout << output << std::endl;
    return 0;
}
