#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static int solve(const int n, const int m, std::vector<int> &arr) {
    // if (m == 0)
    // {
    //     return 0;
    // }

    std::sort(arr.begin(), arr.end());
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        if (((arr[i] * (arr[i] - 1)) / 2) <= m)
        {
            arr[i + 1] += arr[i];
            res++;
            continue;
        }

        break;
    }

    return res;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::cout << solve(n, m, arr);
        std::cout << "\n";
    }

    return 0;
}
