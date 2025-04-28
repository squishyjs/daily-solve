#include <iostream>
#include <algorithm>

/* chaat = 2 bananas, 1 apple */
/* how many? */
int solve(int bananas, int apples) {
    return std::min((bananas / 2), apples);
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int b, a;
        std::cin >> b >> a;
        std::cout << solve(b, a) << std::endl;;
    }
    return 0;
}
