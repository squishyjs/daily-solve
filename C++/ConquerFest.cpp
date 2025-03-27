#include <iostream>


int main() {

    int n, b;
    std::cin >> n >> b;
    if (n >= 10 * b) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
