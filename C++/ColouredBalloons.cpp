#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL);                     \

int64_t solve(int n, int64_t arr[]) {
    int64_t sum {0}, curr {1};
    for (int i = 0; i < n; ++i) {
        sum += (curr * arr[i]);

        curr++;
    }

    return sum;
}


int main(void) {
    int t;
    std::cin >> t;

    static int64_t arr[200000]; // big enough

    while (t--) {
        int n;
        std::cin >> n;

        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        int64_t out = solve(n, arr);
        std::cout << out << std::endl;
    }

    return 0;
}
