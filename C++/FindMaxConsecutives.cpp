#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

const int ZERO = 0;

static int findMaxConsecutiveOnes(std::vector<int> &nums) {
    const int n = nums.size();
    int max_length = 0, ones = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] == ZERO)
        {
            max_length = std::max(max_length, ones);
            ones = 0;

            continue;
        }
        // else
        ones++;
    }

    return max_length;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // nothing

    return 0;
}
