#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>

int main() {
    int x; std::cin >> x;
    
    int required_gs = 25 - x;
    std::cout << (required_gs + 4 - 1) / 4;
    std::cout << std::endl;

    return EXIT_SUCCESS; 
}
