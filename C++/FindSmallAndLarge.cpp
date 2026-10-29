#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

static std::pair<int, int> findMinMax(int n, const std::vector<int> &arr)
{
    return {*std::min_element(arr.begin(), arr.end()),
            *std::max_element(arr.begin(), arr.end())};
}

static void solve(const std::vector<int> &arr) {
    std::cout << *std::min_element(arr.begin(), arr.end());
    std::cout << *std::max_element(arr.begin(), arr.end());
    std::cout << "\n";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    return 0;
}
