#include <cstdint>
#include <ios>
#include <iostream>
#include <limits>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

#define ll long long


std::string solve(int n, std::string &s) {
    std::unordered_map<std::string, int> two_gram;

    for (int i = 0; i < n - 1; ++i) {

        std::string curr;
        curr.push_back(s[i]);
        curr.push_back(s[i + 1]);

        two_gram[curr]++;
    }

    // find most commmon substring
    int best = std::numeric_limits<int>::min();
    std::string res;

    for (auto it = two_gram.begin(); it != two_gram.end(); ++it) {
        if (it->second > best) {
            best = it->second;
            res = it->first;
        }
    }
    /* alternatively:
    for (const auto &[k, v] : two_gram) {
        if (v > best) {
            best = v;
            res = k;
        }
    }
    */

    return res;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    // input
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    // output
    std::string o = solve(n ,s);
    std::cout << o << std::endl;
    return 0;
}
