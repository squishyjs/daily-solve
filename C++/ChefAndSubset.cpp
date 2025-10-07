#include <cstddef>
#include <ios>
#include <iostream>
#include <numeric>
#include <string>
#include <system_error>
#include <vector>
#include "bits-stdc++.h"

std::string solve(int a, int b,
                  int c, int d) {
    // cook
    std::vector<int> arr(4);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;

    // complete sum
    if (std::accumulate(arr.begin(), arr.end(), 0) == 0) {
        return "YES";
    }

    // if any of the integers are zero
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        return "YES";
    }

    // dual sum
    if (a + b == 0 || a + c == 0 ||
        a + d == 0 || b + c == 0 ||
        b + d == 0 || c + d == 0) {
        return "YES";
    }

    // triple sum
    if (a + b + c == 0 || a + c + d == 0 || b + c + d == 0 || a + d + b == 0) {
        return "YES";
    }

    return "NO";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b , c, d;
        std::cin >> a >> b >> c >> d;
        std::string res = solve(a, b,  c, d);
        std::cout << res << std::endl;
    }

    return 0;
}
