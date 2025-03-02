#include <iostream>


int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;

        //some base cases
        if (n == 1 || n == 3) {
            std::cout << 1 << std::endl;
            continue;
        }
        
        int seconds = 1;
        if (n % 2 == 0) {
            seconds += n / 2;
        } else {
            seconds = n / 2;
        }
        std::cout << seconds << std::endl;
    }
    // std::cout << 5 / 2;

    return 0;
}
