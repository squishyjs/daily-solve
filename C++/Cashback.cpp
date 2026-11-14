#include <ios>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

static int solve(const int x) {
    return (x >= 200) ? (x - 50) : x;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int x;
    std::cin >> x;
    std::cout << solve(x);
    std::cout << "\n";
    return 0;
}
