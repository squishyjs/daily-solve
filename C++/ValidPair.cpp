#include <iostream>

bool solve(int a, int b, int c) {
    return (a == b) or (a == c) or (b == c);
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    bool result = solve(a, b, c);
    if (result)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
    return 0;
}
