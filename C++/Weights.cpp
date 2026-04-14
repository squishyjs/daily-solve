#include <iostream>
#include <string>
#include <cstdbool>
#include <vector>
#include <algorithm>

using int64 = long long;

static std::string solve(const int w, const int x,
                  const int y, const int z);

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int w, x, y, z;
        std::cin >> w >> x >> y >> z;

        std::cout << solve(w, x, y, z);
        std::cout << "\n";
    }

    return 0;
}

std::string solve(const int w, const int x,
                  const int y, const int z) {
    // TODO: if checks
    if (w == x || w == y || w == z) {
        return "YES";
    }

    if (w == (x + y + z)) {
        return "YES";
    }

    if (w == (x + y)) {
        return "YES";
    }

    if (w == (y + z)) {
        return "YES";
    }

    if (w == (x + z)) {
        return "YES";
    }

    return "NO";
}
