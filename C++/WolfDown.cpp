#include <cstdlib>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

#define WOLF '1'
#define BIRD '0'


int solve(int n, std::string s) {

    int safe = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == WOLF) {
            break;
        }

        if (s[i] == BIRD) {
            safe++;
        }
    }

    return safe;
}

int solve_two(int n, std::string &s) {
    for (int i = 0; i < n; ++i) {
        if (s[i] == WOLF) return i; // i is number of birds before first wolf
    }

    return n; // no wolves → all birds safe
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

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
