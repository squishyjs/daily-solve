#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

void solve(int n,
           int q,
           std::vector<int> &arr)
{
    // Precompute mins of adjacent pairs and initial score
    std::vector<int> mins(std::max(0, n - 1));
    long long score = 0;

    for (int i = 0; i + 1 < n; ++i) {
        mins[i] = std::min(arr[i], arr[i + 1]);
        score += mins[i];
    }

    // Process q updates; each query: position i (1-based) and new value x
    while (q--) {
        int i, x;
        std::cin >> i >> x;
        --i; // convert to 0-based

        // Remove contributions of affected pairs
        if (i - 1 >= 0) score -= mins[i - 1];
        if (i < n - 1)   score -= mins[i];

        // Apply update
        arr[i] = x;

        // Recompute affected mins and add back to score
        if (i - 1 >= 0) {
            mins[i - 1] = std::min(arr[i - 1], arr[i]);
            score += mins[i - 1];
        }
        if (i < n - 1) {
            mins[i] = std::min(arr[i], arr[i + 1]);
            score += mins[i];
        }

        std::cout << score << '\n';
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, q;
        std::cin >> n >> q;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        solve(n, q, arr);
    }

    return 0;
}
