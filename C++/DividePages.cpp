#include <cstddef>
#include <iostream>
#include <numeric>
#include <vector>

static bool is_even(const int x) {
    return (x % 2 == 0);
}

class Solution {
    public:
        std::string checkArray(std::vector<int> &arr) {
            size_t books = arr.size();

            // not one per person
            if (books < 2) {
                return "NO";
            }

            int total_pages = std::accumulate(arr.begin(), arr.end(), 0);
            if (is_even(total_pages))
            {
                return "YES";
            }

            return "NO";
        }
};
