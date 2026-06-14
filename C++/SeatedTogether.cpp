#include <ios>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <algorithm>

static void solve() {
    int x; std::cin >> x;

    int chef = x, chefina = x + 1;
    if (x % 5 == 0) {
        std::cout << "No";
    } else {
        std::cout << "Yes";
    }

    std::cout << std::endl;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
