#include <iostream>

bool tensile(float &tensile) {
    return tensile > 5600;
}

bool carbon(float &carbon) {
    return carbon < 0.7;
}

bool hardness(float &hardness) {
    return hardness > 50;
}

int gradeSteel(float &HARDNESS, float &CARBON, float &TENSILE) {
    if (hardness(HARDNESS) && carbon(CARBON) && tensile(TENSILE)) {
        return 10;
    } else if (hardness(HARDNESS) && carbon(CARBON) && !tensile(TENSILE)) {
        return 9;
    } else if (!hardness(HARDNESS) && carbon(CARBON) && tensile(TENSILE)) {
        return 8;
    } else if (hardness(HARDNESS) && !carbon(CARBON) && tensile(TENSILE)) {
        return 7;
    } else if (hardness(HARDNESS) || carbon(CARBON) || tensile(TENSILE)) {
        return 6;
    } else {
        return 5;
    }
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        float har, car, ten;
        std::cin >> har >> car >> ten;
        std::cout << gradeSteel(har, car, ten);
        std::cout << std::endl;
    }
    return 0;
}
