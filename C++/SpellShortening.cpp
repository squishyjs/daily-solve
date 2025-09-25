#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

std::string solve(int n, std::string s) {
    bool flag = false;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] > s[i + 1]) {
            s.erase(i, 1);
            flag = true;
            break;
        }
    }

    // else: remove last letter
    if (!flag) {
        s.pop_back();
    }

    return s;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::string res = solve(n, s);
        std::cout << res << std::endl;
    }

    return 0;
}
