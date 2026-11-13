#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static int solve(const int n, const int d,
                 std::vector<int> &shop1,
                 std::vector<int> &shop2)
{
    int cost_shop1 = d;
    int cost_shop2 = d;
    int cost_both = 2 * d;

    for (int i = 0; i < n; ++i) {
        cost_shop1 += shop1[i];
        cost_shop2 += shop2[i];
        cost_both += std::min(shop1[i], shop2[i]);
    }

    return std::min({cost_shop1, cost_shop2, cost_both});
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, d;
        std::cin >> n >> d;
        std::vector<int> shop1(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> shop1[i];
        }

        std::vector<int> shop2(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> shop2[i];
        }

        std::cout << solve(n, d, shop1, shop2);
        std::cout << "\n";
    }

    return 0;
}
