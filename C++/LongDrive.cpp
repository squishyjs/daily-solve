#include <cstdlib>
#include <iostream>
#include <numeric>
#include <string>
#include <algorithm>

const int INITIAL = 10;

int solve(int x, int y) {
    //cook your dish here
    int initialTravelled = x * INITIAL;
    int required = y;
    /* 
    * enter some math shit that requires 
    * finding the required distance versus
    * initial distance already covered 
    */
    int numerator = INITIAL * (required - x);
    int denominator = 100 - required;
    // return ceil operation
    int res = (numerator + denominator - 1) / denominator;
    return res;
}

int main() {
    int testCases; std::cin >> testCases;
    while (testCases--) {
        int x, y; std::cin >> x >> y;
        int res = solve(x, y);
        std::cout << res << std::endl;
    }
    return EXIT_SUCCESS;
}
