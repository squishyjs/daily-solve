#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static std::string solve(const int a, const int b,
        const int c, const int d)
{
    int arr[4] {a, b, c, d};

    for (int mask = 1; mask < (1 << 4); ++mask) {
        int sum = 0;

        for (int i = 0; i < 4; ++i) {
            if (mask & (1 << i)) {
                sum += arr[i];
            }
        }

        if (sum == 0) {
            return "Yes";
        }
    }

    return "No";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        std::cout << solve(a, b, c, d);
    // }

    return 0;
}
