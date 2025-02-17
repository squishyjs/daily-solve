#include <iostream>
#define ll long long int


int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {

        int x, y, n, r;
        std::cin >> x >> y >> n >> r;
        
        // if not enough money
        if ((x * n) > r) {
            std::cout << "-1" << std::endl;
        }
        /*
        We need to solve the variable in the simultaneous equation:
        ax + by = r  --(1)
        a  + b  = n  --(2)
        */
        else {
            ll result = (r - (n * x)) / (y - x );
            if (result >= n) {
                std::cout << 0 << " " << n << std::endl;
            } else {
                std::cout << n - result << " " << result << std::endl;
            }
        }
    }

    return 0;
}
