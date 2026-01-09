#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <limits>

#define fastIO                                  \
    std::ios_base::sync_with_stdio(false);      \
    std::cin.tie(nullptr);                      \
    std::cout.tie(nullptr);                      \

using int64 = long long;

std::string solve(int n, std::string &s) {
    std::unordered_map<int, int> mp;
    for (const int &x : s) {
        if (mp[x] > 0) {
            return "Yes";
        }
        mp[x]++;
    }

    return "No";
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        // input
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        // output
        std::cout << solve(n, s);
        std::cout << "\n";
    }

    return 0;
}
