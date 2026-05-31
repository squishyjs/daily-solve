#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

static void solve() {
    int x, y, a, b;
    std::cin >> x >> y >> a >> b;

    if (x == y && a == b) {
        std::cout << "Alice\n";
        return;
    }

    // edge cases
    if (x == y) {
        if (a > b) {
            std::cout << "Alice\n";
            return;
        } else {
            std::cout << "Bob\n";
            return;
        }
    }

    if (x > y) {
        std::cout << "Alice\n";
        return;
    } else {
        std::cout << "Bob\n";
    }
}

static void easy_solve() {
    int x, y, a, b;
    std::cin >> x >> y >> a >> b;

    if (x > a || (x == a && y >= b)) { std::cout << "Alice\n";}
    else { std::cout << "Bob\n"; }
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // solve();
    easy_solve();

    return 0;
}
