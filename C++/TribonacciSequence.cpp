#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

#define ll long long
#define fastIO                                                    \
    std::ios::sync_with_stdio(false);                             \
    std::cin.tie(NULL);                                           \
    std::cout.tie(NULL);                                          \
    // std::cout.precision(std::numeric_limits<double>);


std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;

    // edge case 1
    if (n == 0) {
        return result;
    }

    // edge case 2
    if (n < 3) {
        for (int i = 0; i < n; ++i) {
            result.push_back(signature[i]);
        }

        return result;
    }

    int a = signature[0];
    int b = signature[1];
    int c = signature[2];
    result = {a, b, c};

    for (int i = 3; i < n; ++i) {
        int next = a + b + c;
        result.push_back(next);

        a = b;
        b = c;
        c = next;
    }

    return result;
}
