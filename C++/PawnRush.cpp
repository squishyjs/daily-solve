#include <iostream>
#include <string>
#include <vector>

static int solve(const int r) {
    const int row_max = 8;

    if (r == 2)
    {
        return row_max - (r + 1);
    }

    return row_max - r;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int r;
    std::cin >> r;
    std::cout << solve(r);
    std::cout << "\n";
    return 0;
}
