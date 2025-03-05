#include <iostream>

bool solve(int size, int sum);

int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int N, K;
        std::cin >> N >> K;

        //cook your code here
        bool result = solve(N, K);
        std::cout << (result ? "YES" : "NO") << std::endl;
    }
    return 0;
}

bool solve(int size, int sum) {
    bool flag = true;
    // if (size % sum != 0) {
    //     int divide = size / sum;
    //     int divideCeil = (size + sum - 1) / sum;
    //     if (sum != divide || sum != divideCeil) {
    //         flag = false;
    //     }
    // }
    //if not even
    int divide = size / 2;
    int divideCeil = (size + 2 - 1) / 2;
    // std::cout << divide << "\n";
    // std::cout << divideCeil << "\n";
    if (sum != divide && sum != divideCeil) {
        flag = false;
    }
    return flag;
}
