#include <cstdint>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

#define perform_fast_input_output           \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);

using u32 = uint32_t;
using u64 = uint64_t;
using int64 = long long;

int64 update_player_lead(int player_1, int player_2) {
    if (player_1 > player_2) {
        return 1LL;
    }

    return 2LL;
}

void solve(int n, std::vector<std::pair<int, int>> &arr) {
    int64 max_lead = 0LL;
    int64 player_lead = 1LL;

    int64 cum1 = 0LL;   // cumulative score for player 1
    int64 cum2 = 0LL;   // cumulative score for player 2

    for (const auto& [first, second] : arr) {
        cum1 += first;
        cum2 += second;

        int64 diff = std::llabs(cum1 - cum2); // cumulative diff

        if (diff > max_lead) {
            max_lead = diff;
            player_lead = update_player_lead((int)cum1, (int)cum2);
        }
    }

    std::cout << player_lead << " " << max_lead;
    std::cout << "\n";
}

void fast_io() {
    perform_fast_input_output;
}

int main(void) {
    fast_io();

    // input
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i].first >> arr[i].second;
    }

    // output
    solve(n, arr);

    return 0;
}
