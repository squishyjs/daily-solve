#include <cstddef>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

#define RED 'R'
#define BLUE 'B'
#define GREEN 'G'

int solve(int n, std::string s) {
    /* colour configuration */
    // r + b = g;
    // b + g = r;
    // g + r = b;
    int r = 0, b = 0, g = 0;
    for (const char c : s) {
        if (c == RED) {
            r++;
        } else if (c == BLUE) {
            b++;
        } else {    // is green
            g++;
        }
    }

    int total = r + b + g;
    int max_paint = std::max({r, b, g});

    return total - max_paint;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        int res = solve(n, s);
        std::cout << res << std::endl;
    }

    return 0;
}
