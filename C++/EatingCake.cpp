#include <iostream>
#include <cmath>


bool bobUnhappy(int A, int B) {
    return B < A;
}

bool aliceUnhappy(int A, int B) {
    return A < B;
}

int ceilDivide(int a, int b) {
    return (a + b - 1) / 2;
}

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int a, b;
        std::cin >> a >> b;
        
        if (a == b) {
            std::cout << 0 << std::endl;
            continue;
        }

        int countSlices = 0;
        while (a != 0 && b != 0) {
            if (a > b) {
                countSlices += ceil(1.0 * a / 2);
                a = floor(1.0 * a / 2);
            } else if (b > a) {
                countSlices += ceil (1.0 * b / 2);
                b = floor(1.0 * b / 2);
            } else {
                break;
            }
        }
        std::cout << countSlices << std::endl;
    }
    return 0;
}
