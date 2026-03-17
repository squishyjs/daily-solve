#include <iostream>
#include <string>

const int END = 10;

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int x;
        std::cin >> x;

        int time = 3;
        if (x + time > END) {
            std::cout << "No";
        }
        else {
            std::cout << "Yes";
        }

        std::cout << "\n";
    }

    return 0;
}
