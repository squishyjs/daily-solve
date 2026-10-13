#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static int solve(const int n, const int k,
        std::vector<int> &arr)
{
    std::sort(arr.begin(), arr.end(), std::greater<>());

    int total = 0;
    for (int i = 0; i < k; ++i)
    {
        total += arr[i];
    }

    return total;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> vec[i];
        }

        std::cout << solve(n, k, vec);
        std::cout << "\n";
    }

    return 0;
}
