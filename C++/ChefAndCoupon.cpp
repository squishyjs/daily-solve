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


std::string solve(int d, int c,
                std::vector<int> &day_one,
                std::vector<int> &day_two)
{
    int cost_d1 = std::accumulate(day_one.begin(), day_one.end(), 0);
    int cost_d2 = std::accumulate(day_two.begin(), day_two.end(), 0);

    // without coupon
    int without = cost_d1 + cost_d2 + 2 * d;

    int with_delivery = 0;
    if (cost_d1 < 150) {
        with_delivery += d;
    }

    if (cost_d2 < 150) {
        with_delivery += d;
    }

    // with coupon
    int with = cost_d1 + cost_d2 + c + with_delivery;

    return (with < without) ? "YES" : "NO";
}

int32_t main() {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int d, c;
        std::cin >> d >> c;
        std::vector<int> day_one(3);
        for (int i = 0; i < 3; ++i) {
            std::cin >> day_one[i];
        }
        std::vector<int> day_two(3);
        for (int i = 0; i < 3; ++i) {
            std::cin >> day_two[i];
        }
        std::string output = solve(d, c, day_one, day_two);
        std::cout << output << std::endl;
    }

    return 0;
}
