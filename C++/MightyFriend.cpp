#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <cstdlib>

std::string solve(int n, int k, std::vector<int> &arr) {
    int swaps = k;
    int motu = 0, tomu = 0;
    std::vector<int> m_arr;
    std::vector<int> t_arr;

    for (int i = 0; i < n; ++i) {
        int curr = arr[i];
        if (i % 2 == 0) {
            motu += curr;
            m_arr.push_back(curr);
        } else {
            tomu += curr;
            t_arr.push_back(curr);
        }
    }
    // No swaps needed
    if (tomu > motu) { return "YES"; }

    for (int i = 0; i < swaps; ++i) {
        auto max_it = std::max_element(m_arr.begin(), m_arr.end());
        auto min_it = std::min_element(t_arr.begin(), t_arr.end());

        if (*max_it <= *min_it) {
            break;
        }

        std::swap(*max_it, *min_it);
    }
    motu = std::accumulate(m_arr.begin(), m_arr.end(), 0);
    tomu = std::accumulate(t_arr.begin(), t_arr.end(), 0);

    if (tomu > motu) {
        return "YES";
    }
    return "NO";
}

int main() {
    int test; std::cin >> test;
    while (test--) {
        int n, k; std::cin >> n >> k;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        std::string res = solve(n, k, arr);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
