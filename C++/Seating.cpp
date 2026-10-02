#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static void solve(const int n, const int m, const int k,
        const std::vector<int> &arr) {

    int people_to_seat = k;
    for (int i = 1; i <= n and people_to_seat > 0; ++i) {
        bool occupied = false;

        for (const int &x : arr)
        {
            if (x == i)
            {
                occupied = true;
                break;
            }
        }

        if (!occupied)
        {
            std::cout << i << " ";
            --people_to_seat;
        }
    }

    // end
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, m, k;
        std::cin >> n >> m >> k;
        std::vector<int> arr(m);
        for (int i = 0; i < m; ++i) {
            std::cin >> arr[i];
        }

        solve(n, m, k, arr);
        std::cout << "\n";
    }

    return 0;
}
