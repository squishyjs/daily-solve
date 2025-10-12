#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n, int m, std::vector<std::string> &arr) {
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
           for (int k = 1; k < n; ++k) {
                int x = j + k;
                int y = i + k;

                // if conditions
                if (x >= m || y >= n) {
                    break;
                }
                if (arr[i][x] == arr[i][j] &&
                    arr[y][x] == arr[i][j] &&
                    arr[y][j] == arr[i][j]) {

                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::vector<std::string> arr(n);
        for (int i = 0; i < n; ++i) {
            std::string s;
            std::cin >> s;
            arr[i] = s;
        }
        int res = solve(n, m, arr);
        std::cout << res << std::endl;
    }
    return 0;
}
