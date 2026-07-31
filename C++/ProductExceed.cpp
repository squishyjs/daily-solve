#include <ios>
#include <iostream>
#include <string>
#include <vector>

static int solve(int x, int y, int p) {
    int count = 0;
    while ((x * y) < p)
    {
        if (x < y)
        {
            x++;
            count++;
        } else {
            y++;
            count++;
        }
    }

    return count;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x, y, p;
        std::cin >> x >> y >> p;
        std::cout << solve(x, y, p);
        std::cout << "\n";
    }

    return 0;
}
