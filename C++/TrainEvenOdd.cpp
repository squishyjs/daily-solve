#include <iostream>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

int solve(int n, int arr[]) {
    int i, even = 0, odd = 0;
    for (i = 0; i < n; ++i) {
        int curr = arr[i];
        if ((i + 1) % 2 == 0) {
            even += curr;
        } else {
            odd += curr;
        }
    }
    return even > odd ? even : odd;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }
        int res = solve(n, arr);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
