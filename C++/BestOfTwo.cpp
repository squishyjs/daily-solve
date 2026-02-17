#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define fastIO                                  \
    std::ios_base::sync_with_stdio(false);      \
    std::cin.tie(nullptr);                      \
    std::cout.tie(nullptr);

using int64 = long long;
using u32 = uint32_t;
using u64 = uint64_t;

std::string solve(int a1, int a2, int a3,
                  int b1, int b2, int b3) {
    int arr_a[3] = {a1, a2, a3};
    std::sort(arr_a, arr_a + 3);

    int arr_b[3] = {b1, b2, b3};
    std::sort(arr_b, arr_b + 3);


    int alice = arr_a[1] + arr_a[2];
    int bob = arr_b[1] + arr_b[2];

    if (alice > bob) {
        return "Alice";

    }
    else if (bob > alice) {
        return "Bob";
    }

    return "Tie";
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        int a1, a2, a3, b1, b2, b3;
        std::cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        std::cout << solve(a1, a2, a3, b1, b2, b3);
        std::cout << "\n";
    }

    return 0;
}
