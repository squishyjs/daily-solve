#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int solve(int n, int m, std::vector<std::string> &arr) {
    // TODO:
    // pattern 1: top-left is R -> R G R G ...
    // pattern 2: top-left is G -> G R G R ...
    int cost1 = 0, cost2 = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char expected1 = ((i + j) % 2 == 0) ? 'R' : 'G';
            char expected2 = ((i + j) % 2 == 0) ? 'G' : 'R';

            if (arr[i][j] != expected1) {
                if (arr[i][j] == 'R' && expected1 == 'G') {
                    cost1 += 5;
                }
                else if (arr[i][j] == 'G' && expected1 == 'R') {
                    cost1 += 3;
                }
            }

            if (arr[i][j] != expected2) {
                if (arr[i][j] == 'R' && expected2 == 'G') {
                    cost2 += 5;
                }
                else if (arr[i][j] == 'G' && expected2 == 'R') {
                    cost2 += 3;
                }
            }
        }
    }

    return std::min(cost1, cost2);
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
        std::vector<std::string> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::cout << solve(n, m, arr);
        std::cout << "\n";
    }

    return 0;
}
