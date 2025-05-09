#include <iostream>
#include <string.h>

bool isEven(int pizza) {
    return pizza % 2 == 0;
}

int main() {
    int n;
    std::cin >> n;
    if (isEven(n)) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 2 << std::endl;
    }
    return 0;
}
