#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>

static std::string solve(const int n, const int k, std::string &s) {
    int length = s.length();

    if (length == k) {
        return "YES";
    }

    int groups = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            groups++;
        }
    }

    if (k >= groups && k <= n) {
        return "YES";
    }

    return "NO";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        std::cout << solve(n, k, s);
        std::cout << "\n";
    }

    return 0;
}
