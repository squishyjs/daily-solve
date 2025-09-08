#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>

std::string solve_two(int n, int k, int x) {
    int curr = 0, sum = 0;
    for (int i = 1; i < k; ++i) {
        curr = sum + 1;
        sum += curr;
        if (x <= sum) {
            return "No";
        }
    }
    return "Yes";
}

std::string solve(int n, int k, int x) {
    // n = length of array
    // k = index of value x
    // x = value of array recalled
    if (x == n) {
        return "No";
    }

    std::vector<int> arr(n); arr[0] = 1;

    int sum = 0;
    for (int i = 1; i < n; ++i) {
        int prev = arr[i - 1];
        sum += prev;

        arr[i] = sum + 1;   // one greater than the previous sum

        int target_index = k - 1;
        if (i == target_index) {
            if (x < arr[i]) {
                return "No";
            }
        }
    }

    return "Yes";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k, x;    // length, index, value
        std::cin >> n >> k >> x;
        std::string res = solve_two(n, k, x);
        std::cout << res << std::endl;
    }

    return 0;
}
