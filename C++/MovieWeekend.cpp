#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>

// TODO: return proper index (b_movie)
int solve(int n,
          std::vector<int> &length,
          std::vector<int> &rating)
{
    int b_index = 0, b_movie = 1, b_rating = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int curr_index = i;
        int curr_mov_rating = rating[i];
        int curr_mov_length = length[i];
        int curr_movie = curr_mov_rating * curr_mov_length;

        // update best movie rating
        if (curr_mov_rating > b_rating) {
            b_rating = curr_mov_rating;
            b_index = curr_index;
        }
    }

    // return best movie
    return b_movie;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::vector<int> length(n), rating(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> length[i];
        }
        for (int i = 0; i < n; ++i) {
            std::cin >> rating[i];
        }

        int res = solve(n, length, rating);
        std::cout << res << std::endl;
    }

    return 0;
}
