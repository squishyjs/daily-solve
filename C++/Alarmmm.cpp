#include <ios>
#include <iostream>
#include <new>
#include <string>
#include <algorithm>

static int solve(const int n, const int k, std::string &s) {

    int alarm_count = 0;

    for (int i = 0; i < n; i++) {

        if (s[i] == '1') {

            alarm_count++;
            i = std::min(n - 1, i + k);
        }
    }

    return alarm_count;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        std::cout << solve(n, k, s);
        std::cout << "\n";
    }

    return 0;
}
