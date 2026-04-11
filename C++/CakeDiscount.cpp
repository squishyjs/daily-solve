#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int solve(int n) {
    if (n <= 4) {
        return n * 100;
    }

    return n * 85;
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
