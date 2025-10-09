#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <numeric>

int solve(std::string s) {
    int length = s.length();

    std::sort(s.begin(), s.end());

    int sum = 0;
    for (int i = 0; i < length; ++i) {
        int curr_i = i + 1;
        int order = s[i] - 'a' + 1;

        sum += (curr_i * order);
    }

    return sum;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;

        int res = solve(s);
        std::cout << res << std::endl;
    }

    return 0;
}
