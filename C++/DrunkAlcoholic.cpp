#include <iostream>


int main() {
    // for every 3 steps forwad, he moves 1 step backward
    // formally:
    // 1st second he moves 3 steps forward,
    // 2nd second he moves 1 step backwards
    // and so on,

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int k; std::cin >> k;

        int position = 0;
        for (int i = 1; i <= k; ++i) {
            if (i % 2 != 0) {
                position += 3;
                continue;
            }
            if (i % 2 == 0) {
                position--;
            }
        }
        std::cout << position << std::endl;
    }
    return 0;
}
