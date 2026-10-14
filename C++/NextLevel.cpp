#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int x;
    std::cin >> x;
    if (x >= 60) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}
