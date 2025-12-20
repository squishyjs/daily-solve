#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define fastIO                                  \
    std::ios::sync_with_stdio(false);           \
    std::cin.tie(nullptr);                      \
    std::cout.tie(nullptr);                     \

using int64 = long long;

int64 solve(int n, int64 arr[], int64 cost[]) {

}

int main(void) {
    fastIO;

    static int64 arr[200000]; // big enough
    static int64 cost[200000]; // big enough

    int q;
    std::cin >> q;

    while (q--) {
        int n;
        std::cin >> n;
        for (int i = 0; i < n; ++i)
        {
            std::cin >> arr[i];
        }

        for (int i = 0; i < n; ++i)
        {
             std::cin >> cost[i];
        }

        std::cout << solve(n, arr, cost) << "\n";
    }

    return 0;
}
