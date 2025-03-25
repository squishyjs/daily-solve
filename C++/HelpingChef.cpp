#include <iostream>


int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        if (n < 10) {
            std::cout << "Thanks for helping Chef!\n";
        } else {
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}
