#include <iostream>

int minimum_packets(int children, int candies) {
    if (candies >= children) 
        return 0;

    int candies_need_to_purchase = children - candies;
    if (candies_need_to_purchase % 4 == 0) {
        return candies_need_to_purchase / 4;
    } else {
        return ((candies_need_to_purchase / 4) + 1);
    }
}

int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n, x;
        std::cin >> n >> x;
        
        auto solution = minimum_packets(n, x);
        std::cout << solution << std::endl;
    }

    return 0;
}
