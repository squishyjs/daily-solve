#include <ios>
#include <iostream>
#include <ostream>
#include <string>
#include <typeindex>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

std::string solve(int n, int m, std::string s) {
    // cook code
    int bob = 0, alice = 0;
    for (const char c : s) {
        if (c == '1') {
            alice++;
        } else {
            bob++;
        }
    }

    // if (bob == alice) {
    //     return "Yes";
    // }

    // else need to check
    int remaining = n - m;
    int diff = std::abs(bob - alice);
    if (n % 2 == 0 && diff <= remaining) {
        return "Yes";
    }

    return "No";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;
        std::string s; std::cin >> s;

        std::string res = solve(n, m, s);
        std::cout << res << std::endl;
    }

    return EXIT_SUCCESS;
}
