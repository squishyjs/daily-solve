#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cstdlib>

int solve(int n, std::vector<int> &arr)
{
    // cost = 30 per cake
    // sell = 50 per cake
    // e.g: 42
    // then -> 42 * 30 = 1260
    // 42 * 50 = 2100

    int cost = 30;
    int sell = 50;
    int x = *std::max(arr.begin(), arr.end());
    int bakedCakes = x * n;
    int expense = bakedCakes * cost;

    int soldCakes = 0;
    for (int i = 0; i < n; ++i) {
        soldCakes += arr[i];
    }

    int profit = soldCakes * sell;

    return profit - expense;
}

int solveSolution(int maxVal, int n, std::vector<int> &arr)
{
    int maxProfit = 0;
    for (int i = 0; i <= maxVal; ++i) {

        int sold = 0;
        for (int j = 0; j < n; ++j) {
            sold += std::min(i, arr[j]);
        }

        int profit = 50 * sold - 30 * i * n;
        maxProfit = std::max(maxProfit, profit);
    }

    return maxProfit;
}

int main() {
    int t; std::cin >> t;
    while (t--) {

        int n; std::cin >> n;
        int maxVal = 0;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
            maxVal = std::max(maxVal, arr[i]);
        }
        
        int res = solveSolution(maxVal, n, arr);
        std::cout << res << std::endl;

    }

    return EXIT_SUCCESS;
}
