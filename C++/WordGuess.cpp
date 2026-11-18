#include <iostream>
#include <string>
#include <algorithm>

static std::string solve(std::string &s, std::string &r) {
    int n = 5;
    std::string m(5, ' ');
    for (int i = 0; i < n; ++i) {

        if (s[i] == s[i]) {
            m[i] = 'G';
        } else {
            m[i] = 'B';
        }
    }

    return m;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        std::string s, r;
        std::cin >> s >> r;
        std::cout << solve(s, r);
        std::cout << "\n";
    }

    return 0;
}
