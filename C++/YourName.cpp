#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

#define ll long long
#define fastIO                                  \
    std::ios_base::sync_with_stdio(false);      \
    std::cin.tie(NULL);                         \
    std::cout.tie(NULL);                         \


std::string solve(int n, std::string& s, std::string& t) {
    std::unordered_map<char, int> s_ctr, t_ctr;
    for (int i = 0; i < n; ++i)
    {
        s_ctr[s[i]]++;
        t_ctr[t[i]]++;
    }

    for (const char c : t)
    {
        if (s_ctr[c] < t_ctr[c])
        {
            return "NO";
        }
    }

    return "YES";
}

int main(void) {
    fastIO;
    // test cases
    int q;
    std::cin >> q;
    while (q--) {

        int n;
        std::cin >> n;
        std::string s, t;
        std::cin >> s >> t;

        std::cout << solve(n, s, t);
        std::cout << std::endl;

    }

    return 0;
}
