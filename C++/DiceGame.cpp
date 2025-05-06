#include <iostream>
#include <pthread.h>

const int MIN = 13;
const int MAX = 6;

int solve(int n) {
    if (n == 1) {
        return MAX;
    }

    int score = 0;
    if (n % 2 == 0) {
        score = MIN * (n / 2);
    } else {
        int min = n - 1;
        score += (MAX + (MIN * (n - 1)/ 2));
    }
    return score;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;
        int res = solve(n);
        std::cout << res << std::endl;
    }
    return 0;
}
