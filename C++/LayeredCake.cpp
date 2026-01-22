#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);

using int64 = long long;

int64 solve(int n, int m, std::vector<int> &fl, std::vector<int> &sl) {
    int count = 0;
    for (const int &s_cake : sl) {

        for (const int &f_cake : fl) {

            if (s_cake < f_cake)
            {
                count++;
            }
        }
    }

    return count;
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::vector<int> fl(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> fl[i];
        }

        std::vector<int> sl(m);
        for (int i = 0; i < m; ++i) {
            std::cin >> sl[i];
        }

        std::cout << solve(n, m, fl, sl);
        std::cout << "\n";
    }

    return 0;
}
