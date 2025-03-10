#include <iostream>


int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int Sx, Sy, Ex, Ey;
        std::cin >> Sx >> Sy >> Ex >> Ey;
        //cook your C++ code
        int numberOfMoves = 0;
        if (Sx == Ex || Sy == Ey) {
            numberOfMoves = 2;
        } else {
            numberOfMoves = 1;
        }
        std::cout << numberOfMoves << std::endl;
    }
    return 0;
}
