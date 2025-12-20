#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define fastIO                                 \
    std::ios::sync_with_stdio(false);          \
    std::cin.tie(nullptr);                     \
    std::cout.tie(nullptr);

using int64 = long long;



int main(void) {
    int q;
    std::cin >> q;
    while (q--)
    {
        // n = friends
        // k = number of teleports
        // x = range of possible positions of teleports
        int n, k, x;
        std::cin >> n >> k >> x;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
             std::cin >> arr[i];
        }


    }

    return 0;
}
