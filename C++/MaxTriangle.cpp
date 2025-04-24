#include <iostream>

int possible(int sticks) {
    if (sticks <= 3) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += sticks;
        sticks--;
    }
    return sum;
}

int main() {

    int testCases;
    std::cin >> testCases; 
    while (testCases--) {
        int sticks; std::cin >> sticks;
        int result = possible(sticks);
        std::cout << result << "\n";
    }
    return 0;
}
