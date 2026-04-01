#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

bool is_lucky(int weapon) {
    return weapon % 2;
}

std::string solve(int n, std::vector<int> &arr) {
    int lucky = 0, unlucky = 0;
    for (const int &x : arr) {
        if (is_lucky(x))
        {
            lucky++;
        }
        else {
            unlucky++;
        }
    }

    if (lucky > unlucky) {
        return "READY FOR BATTLE";
    }

    // else
    return "NOT READY";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    // int t;
    // std::cin >> t;
    // while (t--) {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << solve(n, arr);
    std::cout << "\n";
    // }

    return 0;
}
