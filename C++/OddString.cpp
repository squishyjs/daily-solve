#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);                  \

using int64 = long long;

std::string solve(int n, std::string &s) {
    /* A string is called odd if there
     * exists two different chars, Si Sj,
     * with an odd distance between their
     * indices*/

    std::map<char, int> mp;
    for (const char &c : s) {
        mp[c]++;
    }

    bool not_odd = false;
    for (auto it : mp) {
        if (it.second > 2) {
            not_odd = true;
            break;
        }
    }

    if (not_odd) {
        return "NO";
    }

    return "YES";
}

int main(void) {
    fastIO;

    // test cases
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::cout << solve(n, s);
        std::cout << "\n";
    }

    return 0;
}
