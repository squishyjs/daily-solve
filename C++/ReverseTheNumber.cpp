#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;

int64 reverse(int n) {
    int64 remainder;
    int64 reversed = 0;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;

        n /= 10;
    }

    return reversed;
}

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        std::cout << reverse(n);
        std::cout << "\n";
    }

    return 0;
}
