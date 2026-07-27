#include <cstddef>
#include <iostream>
#include <sys/wait.h>
#include <vector>
#include <algorithm>

static size_t solve(const int n, std::vector<int> &arr) {
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            arr.erase(arr.begin() + i);
        }
    }

    return arr.size();
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << solve(n, arr);
    std::cout << "\n";

    return 0;
}
