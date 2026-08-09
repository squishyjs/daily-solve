#include <ios>
#include <iostream>
#include <string>
#include <string>
#include <vector>

static int solve(const int n) {
    return 20 - n;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::cout << solve(n);
    std::cout << "\n";

    return 0;
}
