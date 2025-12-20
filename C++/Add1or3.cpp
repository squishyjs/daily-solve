#include <cstddef>
#include <ios>
#include <iostream>
#include <string>

using namespace std;

#define ll long long
#define fastIO                                  \
    std::ios_base::sync_with_stdio(false);      \
    std::cin.tie(nullptr);                      \
    std::cout.tie(nullptr);                     \


std::string solve(int n, int m) {
    // if (m / 1 == n || m / 3 == m)
    // {
    //     return "YES";
    // }

    bool at_least = (m >= n);
    bool at_most = (m <= n * 3);
    bool same_parity = ((m % 2) == (n % 2));

    if (at_least && at_most && same_parity)
    {
        return "YES";
    }

    return "NO";
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::cout << solve(n, m);
        std::cout << "\n";
    }

    return 0;
}
