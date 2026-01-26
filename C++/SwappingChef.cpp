#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr)

using int64 = long long;

std::string solve(int n, std::string &s) {
    if (std::is_sorted(s.begin(), s.end())) {
        return "YES";
    }

    std::string t = s;
    std::sort(t.begin(), t.end());

    int middle = s.length() / 2;
    for (int i = 0; i < middle; ++i) {
        char a = s[i], b = s[n - 1 - i];    // front, back
        char x = t[i], y = t[n - 1 - i];    // front, back

        if (!((a == x && b == y) || (a == y && b == x))) {
            return "NO";
        }
    }

    // check middle element symmetry
    if (n % 2 == 1 && s[n / 2] != t[n / 2]) {
        return "NO";
    }

    return "YES";
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;  // length
        std::string s;
        std::cin >> s;  // string

        std::cout << solve(n, s);
        std::cout << "\n";
    }

    return 0;
}
