#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;

std::string solve(int a, int b) {
    // valuation arithmetic
    int f_investor = a / 0.1;
    int s_investor = b / 0.2;

    if (f_investor > s_investor) {
        return "FIRST";
    } else if(s_investor > f_investor) {
        return "SECOND";
    }

    return "ANY";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;

        std::cout << solve(a, b);
        std::cout << "\n";
    }

    return 0;
}
