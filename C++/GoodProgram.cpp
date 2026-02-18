#include <iostream>
#include <string>

#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(NULL);                     \
    std::cout.tie(NULL)

using int64 = long long;

std::string solve(int n) {
    if (n % 4 != 0) {
        return "Not Good";
    }

    return "Good";
}

int main(void) {
    fastIO;

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
