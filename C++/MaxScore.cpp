#include <climits>
#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <algorithm>

#define fastIO                                  \
    std::ios_base::sync_with_stdio(false);      \
    std::cin.tie(nullptr);                      \
    std::cout.tie(nullptr)

using int64 = long long;

int64 solve(int n, std::vector<int> &win, std::vector<int> &lose) {
    int min_diff = INT_MAX, min_index = 0, res = 0;

    // find global min diff
    for (int i = 0; i < n; ++i) {

        int diff = abs(win[i] - lose[i]);
        if (diff < min_diff) {
            min_diff = diff;
            min_index = i;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i == min_index) {
            continue;
        }

        res += win[i];
    }

    res += lose[min_index];

    return res;
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::vector<int> win(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> win[i];
        }

        std::vector<int> lose(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> lose[i];
        }

        std::cout << solve(n, win, lose);
        std::cout << "\n";
    }

    return 0;
}
