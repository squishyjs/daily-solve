#include <climits>
#include <cstdint>
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <string>

void solve(int n, int count, std::vector<int> &arr) {
    int length = n;
    // int sum = std::accumulate(arr.begin(), arr.end(), 0);
    // if (sum == 0) {
    //     std::cout << -1 << std::endl;
    //     return;
    // }

    // find two unique integers
    // std::sort(arr.begin(), arr.end());
    int minn = INT_MAX, maxx = INT_MIN;
    for (int i = 0; i < length; ++i) {
        if (arr[i] != 0) {
            if (arr[i] < minn) {
                minn = arr[i];
            }
            if (arr[i] > maxx) {
                maxx = arr[i];
            }
        }
    }

    if (count == n) {
        std::cout << -1 << std::endl;
        return;
    }
    if (minn * 2 > minn) {
        std::cout << maxx << " " << maxx << std::endl;
    } else {
        std::cout << minn << " " << minn << std::endl;
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);

        int count = 0;
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
            if (arr[i] == 0) {
                count++;
            }
        }

        solve(n, count, arr);
    }

    return 0;
}
