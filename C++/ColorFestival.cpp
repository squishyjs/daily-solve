#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using int64 = long long;

int64 solve(int n, std::vector<int> &arr) {
    std::unordered_set<int> s(arr.begin(), arr.end());

    return s.size();
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> colors(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> colors[i];
        }

        std::cout << solve(n, colors);
        std::cout << "\n";
    }

    return 0;
}
