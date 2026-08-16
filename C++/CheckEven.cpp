#include <cstddef>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

static bool is_even(const int x) {
    return x % 2 == 0;
}

static std::string solve(const int l, const int r) {
    for (int it = l; it <= r; ++it) {
        if (is_even(it))
        {
            return "YES";
        }
    }

    return "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int l, r;
    std::cin >> l >> r;
    std::cout << solve(l, r);
    std::cout << "\n";
    return 0;
}
