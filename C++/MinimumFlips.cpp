#include <cstdlib>
#include <iostream>
#include <vector>
#include <numeric>


int minimumFlipsSolution(int n, std::vector<int> &vec) {
    int vecSum = std::accumulate(vec.begin(), vec.end(), 0);
    
    int res = 0;
    if (vecSum == 0) {
        return res;
    }
    if (n % 2 == 0) {
        res = std::abs(vecSum) / 2;
    } else {
        res = -1;
    }
    return res;
}

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int length;
        std::cin >> length;
        std::vector<int> vector(length);
        for (int i = 0; i < length; ++i) {
            std::cin >> vector[i];
        }

        std::cout << minimumFlipsSolution(length, vector) << std::endl;
    }
    return 0;
}
