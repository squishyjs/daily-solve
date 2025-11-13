#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>


int solve(int n, std::string &s) {
    int count = 0;
    bool silence = false;
    for (const char c : s) {
        if (c == '0') {
            silence = true;
            continue;
        }

        if (silence && (c == '1')) {
            count++;
        }
    }

    return count;
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

        int output = solve(n, s);
        std::cout << output << std::endl;
    }

    return EXIT_SUCCESS;
}
