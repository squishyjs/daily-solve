#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    int r, b, p, q;
    std::cin >> r >> b >> p >> q;
    std::cout << std::max(r * p, b * q);
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
