#include <algorithm>
#include <functional>
#include <iostream>


int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {

        int n;
        std::cin >> n;
        std::vector<int> vector(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> vector[i];
        }
        // sort the vector in non-increasing order
        std::sort(vector.begin(), vector.end());
        std::vector<int> alternatingSum;
        int maximumSum = 0;
        for (int i = 0; i < vector.size(); ++i) {
            /*
            Code that swaps elements based on their index parity
            (even or oddness). Find the maximum alternating sum
            of the array
            */
            if (i < n / 2) {
                maximumSum = maximumSum - vector[i];
            } else {
                maximumSum = maximumSum + vector[i];
            }
        }
        std::cout << maximumSum << std::endl;
    }


    return 0;
}
