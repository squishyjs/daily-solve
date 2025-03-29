#include <iostream>
#include <string>


bool solve(int n, std::string directions) {
    for (int i = 0; i < n - 1; ++i) {
        char currentChar  = directions[i];
        if (currentChar == directions[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int length;
        std::cin >> length;
        std::string directions;
        std::cin >> directions;

        bool result = solve(length, directions);
        if (result) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
