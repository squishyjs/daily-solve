#include <iostream>


int main() {

    int x;
    std::cin >> x;

    if (x >= 2025 && x <= 2050) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
    
    return 0;
}
