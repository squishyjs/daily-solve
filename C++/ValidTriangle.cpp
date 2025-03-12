#include <iostream>
#include <type_traits>


bool isTriangle(int A, int B, int C) {
    return ((A + B > C) && (B + C > A) && (A + C > B));
}

int main() {

    int a, b, c;
    std::cin >> a >> b >> c;
    if (isTriangle(a, b, c)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
