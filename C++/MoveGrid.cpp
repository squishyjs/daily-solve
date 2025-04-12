#include <iostream>

int xPos(int &a, int &c) {
    return a - c;
}

int yPos(int &b, int &d) {
    return b - d;
}

void solve(int &a, int &b, int &c, int &d) {
    std::cout << xPos(a, c) << " " << yPos(b, d);
    std::cout << std::endl;
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    solve(a, b, c, d);

    return 0;
}
