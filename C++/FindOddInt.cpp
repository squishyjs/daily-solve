#include <cstdint>
#include <cstdlib>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>


int findOdd(const std::vector<int> &numbers) {

    std::unordered_map<int, int> num_freq;
    for (const int &num : numbers)
    {
        num_freq[num]++;
    }

    for (const auto &[k, v] : num_freq)
    {
        if (v % 2 != 0)
        {
            return k;
        }
    }

    return EXIT_FAILURE;
}

int32_t main() {

    return 0;
}
