#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr)

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

bool valid_age(int age) {
    return age >= 10 and age <= 60;
}

int64 solve(int n, std::vector<int> &ages) {
    int64 count = 0;
    for (const int &age : ages) {
        if (valid_age(age)) {
            count++;
        }
    }

    return count;
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::cout << solve(n, arr);
        std::cout << "\n";
    }

    return 0;
}
