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

std::string solve(int a, int b, int c, int d)
{
    if (a == b and a == c and a == d)
    {
        return "YES";
    }

    return "NO";
}

int main(void) {
    int q;
    std::cin >> q;
    while (q--)
    {

        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        std::cout << solve(a, b, c, d);
        std::cout << std::endl;

    }
}
