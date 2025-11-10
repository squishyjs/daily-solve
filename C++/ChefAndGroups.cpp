#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>


int solve(std::string &s) {
    int groups = 0;
    bool in_group = false;
    for (const char c : s) {
        if (c == '1') {
            if (!in_group) {
                groups++;
                in_group = true;
            }
        } else {
            in_group = false;
        }
    }

    // return groups;
    // int groups = 0;
    // int n = s.size();
    // for (int i = 0; i < n; ++i) {
    //     if (s[i] == '1' && (i == 0 || s[i - 1] == '0')) {
    //         groups++;
    //     }
    // }

    return groups;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;

        int res = solve(s);
        std::cout << res << std::endl;
    }

    return 0;
}
