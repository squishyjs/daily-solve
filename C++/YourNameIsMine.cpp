#include <iostream>
#include <unordered_map>


bool solve(std::string man, std::string woman, int mL, int wL) {
    // std::cout << man << std::endl;
    // std::cout << woman << std::endl;
    int i {0};
    int j {0};
    while (i < mL && j < wL) {
        if (man[i] == woman[j]) {
            ++i;
        }
        ++j;
    }
    return (i == mL);
}


int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        std::string man, woman;
        std::cin >> man >> woman;

        int manLength = man.length();
        int womanLength = woman.length();
        bool answer;
        if (manLength < womanLength) {
            answer = solve(man, woman, manLength, womanLength);
        } else {
            answer = solve(woman, man, womanLength, manLength);
        }
        std::cout << (answer ? "YES" : "NO") << std::endl;
    }
    return 0;
}
