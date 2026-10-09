#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static int solve(const std::string &s, const std::string &l) {
    int left = 0, maxLeft = 0;
    int right = 0, maxRight = 0;
    for (const char &c : s)
    {
        if (l.find(c) != std::string::npos) // is in l
        {
            right = 0; // reset right count

            left++;
            maxLeft = std::max(maxLeft, left);
        }
        else {
            left = 0; // reset left count

            right++;
            maxRight = std::max(maxRight, right);
        }
    }

    return std::max(maxRight, maxLeft);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;
        std::string s, l;
        std::cin >> s >> l;

        std::cout << solve(s, l);
        std::cout << "\n";
    }

    return 0;
}
