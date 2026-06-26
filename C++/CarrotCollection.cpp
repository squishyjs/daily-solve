#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static int solve(const int n, const int l, const int r,
                 const std::vector<int> &arr)
{
    return static_cast<int>(NULL);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, l, r;
        std::cin >> n >> l >> r;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        std::cout << solve(n, l, r, arr);
        std::cout << "\n";
    }

    return 0;
}
