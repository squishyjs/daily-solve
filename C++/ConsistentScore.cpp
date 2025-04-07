#include <iostream>


int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int a, b; std::cin >> a >> b;
        int c, d; std::cin >> c >> d;

        if (c < a || d < b) {
            std::cout << "IMPOSSIBLE\n";
        } else {
            std::cout << "POSSIBLE\n";
        }
    }
    return 0;
}
