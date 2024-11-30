#include <iostream>
#include <vector>

bool isTriangle(const std::vector<int>& triangleSides);

int main() {
    int sideA, sideB, sideC;
    std::cout << "Enter triangle sides (sideA, sideB, sideC): ";
    std::cin >> sideA >> sideB >> sideC;

    std::vector<int> triangle = {sideA, sideB, sideC};

    if (isTriangle(triangle)) {
        std::cout << "Valid triangle.";
    } else {
        std::cout << "Not a triangle.";
    }

    return 0;
}

bool isTriangle(const std::vector<int>& triangleSides) { // vector passed as reference, not copied
    
    // check if side less than zero
    for (const auto& side : triangleSides) {
        if (side <= 0) {
            return false;
        }
    }
    if (triangleSides[0] + triangleSides[1] <= triangleSides[2] ||
        triangleSides[1] + triangleSides[2] <= triangleSides[0] ||
        triangleSides[0] + triangleSides[2] <= triangleSides[1]) {
        return false;
    }
    
    return true;
}