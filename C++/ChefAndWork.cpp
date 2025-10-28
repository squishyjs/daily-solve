#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(int n, int k,
          std::vector<int> &arr)
{
    // cook
    int min_rt = 0;

    // for (int i = 0; i < n - 1; ++i) {

    //     int curr_box = arr[i], box_sum = 0;
    //     box_sum += curr_box;
    //     if (box_sum > k) {
    //         return -1;      // too large
    //     }

    //     for (int j = i + 1; j < n; ++j) {
    //         int next_box = arr[j];
    //         box_sum += next_box;
    //         if (box_sum > k) {
    //             box_sum -= next_box;
    //             break;
    //         }
    //     }
    //     min_rt++;
    // }
    // int i = 0;
    // while (i < n) {
    //     int curr_box = arr[i], box_sum = 0;
    //     if (curr_box > k) {
    //         return -1;
    //     }
    //     // otherwise
    //     box_sum += curr_box;
    //     for (int j = i + 1; j < n; ++j) {   // check if can carry more boxes
    //         box_sum += arr[j];
    //         if (box_sum > k) {
    //             box_sum -= arr[j];
    //             break;
    //         }
    //         else {
    //             i++;
    //         }
    //     }
    //     i++;
    //     min_rt++;
    // }

    long long cur = 0;
    int trips = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > k) return -1;                // impossible: a single box too heavy
        if (cur + arr[i] > k) {                   // need a new trip before taking arr[i]
            ++trips;
            cur = 0;
        }
        cur += arr[i];
    }
    if (cur > 0) ++trips;                       // count the last trip if anything carried
    return trips;min_rt;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int res = solve(n, k, arr);
        std::cout << res << std::endl;
    }

    return 0;
}
