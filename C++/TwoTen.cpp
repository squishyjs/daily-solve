#include <iostream>
#include <type_traits>

int solve(int integer) {
    /* given an integer, discover if this integer can be 
     * divisible by 10 possibly after 0 number of turns
     * multiplying by 2.
    */
    if (integer % 10 == 0) {
        return 0;
    }
    if ((integer % 5 == 0) && (integer % 10 != 0)) {
        return 1;
    }
    return -1;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int x;
        std::cin >> x;
        int res = solve(x);
        std::cout << res << std::endl;
    }
    return 0;
}
