#include <iostream>
#include <string>
#include <vector>

static int solve(const int x, const int y, const int f) {
    const int eggs = 12;
    return std::min(x * eggs, (y * eggs) + f);
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int x, y, f;
    std::cin >> x >> y >> f;
    std::cout << solve(x, y, f);
    std::cout << "\n";
}
