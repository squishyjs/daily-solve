#include <iostream>
#include <string>
#include <vector>

int main(void) {
    int x, y;
    std::cin >> x >> y;

    int twice = y / 2;
    int total = x - twice;

    std::cout << total;

    return 0;
}
