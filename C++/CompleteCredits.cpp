#include <iostream>


std::string solve(int x) {
    if (x > 65) {
        return "Overload";
    } else if (x < 35) {
        return "Underload";
    } else {
        return "Normal";
    }
}

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x;
        std::cin >> x;
        std::string semester = solve(x);
        std::cout << semester << std::endl;
    }
    return 0;
}
