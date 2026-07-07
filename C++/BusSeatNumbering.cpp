#include <iostream>
#include <string>
#include <vector>

static std::string solve(const int n) {
    std::string res;
    if (n >= 1 and n <= 15) {
        res += "Lower ";

        if (n >=1 and n <= 10) {
            res += "Double";
        } else {
            res += "Single";
        }

    }
    else {
        res += "Upper ";

        if (n >=16 and n <= 25) {
            res += "Double";
        } else {
            res += "Single";
        }
    }

    return res;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << solve(n);
        std::cout << "\n";
    }

    return 0;
}
