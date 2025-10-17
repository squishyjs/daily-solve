#include <cstddef>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n, int x, int k,
          std::vector<int> &arr)
{
    std::sort(arr.begin(), arr.end());  // smol -> larj

    int ops = k;
    int curr_score = x;
    for (int i = n - 1; i >= 0; --i) {
        if (k < 1) {
            break;
        }
        // otherwise do an operation
        arr[i] = 0;
        curr_score += 100;
    }

    // find rank
    int rank = n + 1;
    int score = curr_score;
    for (int i = 0; i < n; ++i) {
        if (score >= arr[i]) {
            rank--;
        }
    }

    return rank;
}

int solve2(int n, int x, int k, std::vector<int> &arr)
{
    std::sort(arr.begin(), arr.end());  // ascending

    int ops = k;
    int curr_score = x;

    // start from the largest scores and sabotage only if they are > curr_score.
    for (int i = n - 1; i >= 0; --i) {            // <-- fix: decrement i, not n
        if (ops < 1) break;                       // <-- use ops
        if (arr[i] > curr_score) {               // only worth sabotaging if they beat Chef
            arr[i] = 0;                          // (optional: keeps your original intent)
            curr_score += 100;
            --ops;                               // <-- consume one operation
        } else {
            // since arr is sorted ascending, everything to the left is <= curr_score
            break;
        }
    }

    // compute rank correctly: count how many are still > curr_score.
    int rank = 1;                                 // Chef's rank = (count of > X) + 1
    for (int i = 0; i < n; ++i) {
        if (arr[i] > curr_score) ++rank;
    }

    return rank;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x, k;
        std::cin >> n >> x >> k;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int res = solve2(n, x, k, arr);
        std::cout << res << std::endl;
    }

    return 0;
}
