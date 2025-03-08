#include <iostream>


int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x;
        std::cin >> x;

        if (x > 0 && x <= 100) {
            std::cout << x;
        } else if (x > 100 && x <= 1000) {
            int discount = 25;
            std::cout << x - discount;
        } else if (x > 1000 && x <= 5000) {
            int discount = 100;
            std::cout << x - discount;
        } else if (x > 5000) {
            int discount = 500;
            std::cout << x - discount;
        }

        std::cout << std::endl;
    }
    return 0;
}
