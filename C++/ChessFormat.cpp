#include <iostream>
#include <pthread.h>



int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int a, b;
        std::cin >> a >> b;
        int result = 0;
        if (a + b < 3) {
            result = 1;
        } else if ((a + b >= 3) && (a + b <= 10)) {
            result = 2;
        } else if ((a + b >= 11) && (a + b <= 60)) {
            result = 3;
        } else {
            result = 4;
        }
        std::cout << result << std::endl;
    }
    return 0;
}
