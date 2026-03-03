#include <ios>
#include <iostream>
#include <algorithm>

using int64 = long long;

int64 solve(int n) {
    const int page_input = 10;

    return n * page_input;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

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
