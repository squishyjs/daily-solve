#include <iostream>
#include <vector>

int solve(int items, int ceiling, std::vector<int> &prices) {
    int originalRevenue=0, mod_revenue=0;
    for (const int &price : prices) {
        if (price >= ceiling) {
            mod_revenue += ceiling;
        } else {
            mod_revenue += price;
        }
        originalRevenue += price;
    }
    return originalRevenue - mod_revenue;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n, k; std::cin >> n >> k;
        std::vector<int> prices(n);
        for (int i = 0 ; i < n ; ++i) {
            std::cin >> prices[i];
        }
        int res = solve(n, k, prices);
        std::cout << res << std::endl;
    }

    return 0;
}
