#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using int64 = long long;
using u32 = uint_fast32_t;

static std::string winner(const int a, const int b) {
    if (a > b) {
        return "Om";
    }

    if (b > a) {
        return "Addy";
    }

    return "Draw";
}

static std::string solve(const int n,
                         const std::vector<int> &a_arr,
                         const std::vector<int> &b_arr) {
    const int STREAK_BREAK = 0;

    u32 om = 0, addy = 0;
    u32 om_temp = 0, addy_temp = 0;
    for (int i = 0; i < n; ++i) {
        int curr_om = a_arr[i];
        int curr_addy = b_arr[i];

        if (curr_om == STREAK_BREAK) {
            om = std::max(om, om_temp);
            om_temp = 0;
        } else { om_temp++; }

        if (curr_addy == STREAK_BREAK) {
            addy = std::max(addy, addy_temp);
            addy_temp = 0;
        } else { addy_temp++; }
    }

    om = std::max(om, om_temp);
    addy = std::max(addy, addy_temp);

    return winner(om, addy);
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

        std::vector<int> a_arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a_arr[i];
        }

        std::vector<int> b_arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> b_arr[i];
        }

        std::cout << solve(n, a_arr, b_arr);
        std::cout << "\n";
    }

    return 0;
}
