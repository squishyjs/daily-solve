#include <algorithm>
#include <climits>
#include <ios>
#include <iostream>
#include <string>
#include <cstdlib>

bool is_imperfect(int n) {
    bool div_two = false, div_five = false;
    if (n % 2 == 0) { div_two = true; }
    if (n % 5 == 0) { div_five = true; }

    if (div_two and div_five) {
        return false;
    }

    if (div_two) {
        return true;
    }

    if (div_five) {
        return true;
    }

    // else
    return false;
}

int solve(int n) {
    if (is_imperfect(n)) {
        return 0;
    }

    int dist = 1;
    while (true) {
        if (n - dist > 0 and is_imperfect(n - dist)) {
            return dist;
        }

        if (is_imperfect(n + dist)) {
            return dist;
        }

        ++dist;
    }
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::cout << solve(n);
        std::cout << "\n";
    }

    return 0;
}
