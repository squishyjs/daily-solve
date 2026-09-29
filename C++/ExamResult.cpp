#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

static std::string solve(const int c, const int m, const int w,
        const int p, const int r) {
    int result = (c * m) - (w * p);
    return (result >= r) ? "YES" : "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int c, m, w, p, r;
    std::cin >> c >> m >> w >> p >> r;
    std::cout << solve(c, m, w, p, r);
    std::cout << "\n";
    return 0;
}
