#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

std::string solve(int n, std::string s) {
    string t = s;
    for (int i = 1; i < n - 1; ++i) {
        if (s[i - 1] == '1' && s[i] == '1' && s[i + 1] == '1') {
            t[i - 1] = '0';
            t[i] = '0';
            t[i + 1] = '0';
        }
    }
    bool ok = true;
    for (char c : t) {
        if (c == '1') {
            ok = false;
            break;
        }
    }

    if (ok) {
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
        int n;
        std::cin >>  n;
        std::string s;
        std::cin >>  s;

        std::string res = solve(n, s);
        std::cout << res << std::endl;
    }

    return 0;
}
