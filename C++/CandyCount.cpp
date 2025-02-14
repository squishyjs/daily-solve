#include <iostream>
#include <memory>
#include <vector>

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;

        std::vector<int> vector;
        for (int i = 0; i < n; ++i) {
            int element;
            std::cin >> element;
            vector.push_back(element);
        }
        
        int maxCount = vector[0];
        int candyCount = 0;
        
        for (int i = 0; i < n; ++i) {
            int currentEl = vector[i];
            if (currentEl > maxCount) {
                maxCount = currentEl;
            } else {
                candyCount++;
            }
        }

        std::cout << candyCount - 1 << std::endl; // output final reuslt
    }


    return 0;
}
