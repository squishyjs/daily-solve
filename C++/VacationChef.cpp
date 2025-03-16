#include <iostream>


int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x, y, z;
        std::cin >> x >> y >> z;

        if ((x + y) > z) {
            std::cout << "TRAIN" << std::endl;
        } else if ((x + y) < z) {
            std::cout << "PLANEBUS" << std::endl;
        } else {
            std::cout << "EQUAL" << std::endl;
        }
    }
    return 0;
}
