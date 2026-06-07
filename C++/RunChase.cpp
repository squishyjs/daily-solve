#include <iostream>

int main(void) {
    int n;
    std::cin >> n;

    int res = n / 20;
    if (res * 20 <= n) {
        std::cout << res + 1;
    } else {
        std::cout << res;
    }

    return 0;
}
