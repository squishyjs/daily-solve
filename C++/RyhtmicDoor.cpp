#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

// static std::pair<int, int> findMinMax(int n, const std::vector<int> &arr)
// {
//     return {*std::min_element(arr.begin(), arr.end()),
//             *std::max_element(arr.begin(), arr.end())};
// }

static int solve(const int n, const std::string &s) {

    int opened = 0, con = 0;
    for (int i = 0; i < n; ++i) {
        if (i > 0 && s[i] != s[i - 1])
            con = 0;          // button changed: old streak is lost

        if (++con == 3) {
            opened++;
            con = 0;          // door opens, counter resets
        }
    }

    return opened;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        std::cout << solve(n, s);
        std::cout << "\n";
    }

    return 0;
}
