#include <cstdlib>
#include <iostream>


int main() {
    int F1, P1, F2, P2;
    std::cin >> F1 >> P1 >> F2 >> P2;

    //cook your c++ code
    int dishOne = std::abs(F1 - P1);
    int dishTwo = std::abs(F2 - P2);
    std::string dishChoice;
    if (dishOne < dishTwo) {
        dishChoice = "FIRST";
    } else if (dishTwo < dishOne) {
        dishChoice = "SECOND";
    } else {
        dishChoice = "BOTH";
    }
    std::cout << dishChoice << std::endl;

    return 0;
}
