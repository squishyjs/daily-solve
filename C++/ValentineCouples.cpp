#include <climits>
#include <functional>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <iterator>

int solve(int n, std::vector<int> &boys, std::vector<int> &girls) {
    // int likeness = 0;
    std::sort(boys.begin(), boys.end()); // ascending
    std::sort(girls.rbegin(), girls.rend()); // descending
    
    int maxHeight = INT_MIN;
    // std::vector<int> maxV(n);
    for (int i = 0; i < n; ++i) {
        int height = boys[i] + girls[i];       // get current height
        maxHeight = std::max(maxHeight, height); // update the maximum value
    }
    
    // int maxBheight = *(std::max_element(boys.begin(), boys.end()));
    // int minGheight = *(std::min_element(girls.begin(), girls.end()));
    return maxHeight;
}

int main() {
    int t; std::cin >> t;
    while (t--) {
        int n; std::cin >> n;
        std::vector<int> boys(n);
        std::vector<int> girls(n);
        for (int i = 0 ; i < n ; ++i) {
            std::cin >> boys[i];
        }
        for (int i = 0; i < n; ++i) {
            std::cin >> girls[i];
        }
        int res = solve(n, boys, girls);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
