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

long long solve(int n, std::vector<int> &arr) {
    if (n == 1 || n == 2) {
        return 0;
    }

    long long d = 0;
    int max = n;
    while (max > 0)
    {
        for (int i = 0; i < (int)arr.size(); ++i)
        {
            if (arr[i] == max)
            {
                int left = i;
                int right = (int)arr.size() - 1 - i;
                d += std::min(left, right);
                arr.erase(arr.begin() + i);

                max--;
                break;
            }
        }
    }

    return d;
}

int32_t main() {
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(NULL);
    // std::cout.tie(NULL);
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int output = solve(n, arr);
        std::cout << output << std::endl;
    }

    return 0;
}
