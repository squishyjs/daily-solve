#include <iostream>
#include <unordered_map>
#include <vector>
#include <limits>

std::pair<int, int> solve(const std::vector<int>& A) {
    std::unordered_map<int, int> freq;

    for (int num : A)
        freq[num]++;

    int maxCount = 0;
    int result = std::numeric_limits<int>::max();

    for (auto& [num, count] : freq) {
        if (count > maxCount || (count == maxCount && num < result)) {
            maxCount = count;
            result = num;
        }
    }

    return {result, maxCount};
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        auto [element, count] = solve(arr);
        std::cout << element << " " << count << std::endl;
    }

    return 0;
}
