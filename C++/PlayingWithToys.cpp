#include <iostream>


int solve(int n, int m) {
    if (n < m)
    {
        return 0;
    }

    return n - m;
}

int main(void) {
    int n, m;
    std::cin >> n >> m;

    std::cout << solve(n, m);
    std::cout << std::endl;
    return 0;
}
