#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static int solve(const int s, const int b, const int r) {
    return s + (b * r);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int s, b, r;
    std::cin >> s >> b >> r;

    std::cout << solve(s, b, r);
    std::cout << "\n";
    return 0;
}
