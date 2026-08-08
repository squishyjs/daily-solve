#include <iostream>
#include <string>
#include <vector>

static int solve(const int n, const int x, const int y)
{
    if (n <= 3) {
        return (x * n);
    }

    return ((n - 3) * y + (3 * x));
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, x, y;
        std::cin >> n >> x >> y;
        std::cout << solve(n, x, y);
        std::cout << "\n";
    }

    return 0;
}
