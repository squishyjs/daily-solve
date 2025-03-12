#include <algorithm>
#include <iostream>
#include <vector>


void printVector(std::vector<int> &vector) {
    for (const int &element : vector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int length, inserted;
        std::cin >> length >> inserted;
        std::vector<int> vector(length);
        for (int i = 0; i < length; ++i) {
            std::cin >> vector[i];
        }
        //cook your C++
        std::sort(vector.begin(), vector.end());
        int maxElement = *std::max_element(vector.begin(), vector.end());

        //get the median
        int median = vector[(length + inserted) / 2];
        // if (length % 2 == 0) {
        //     median = (vector[length / 2 - 1] + vector[length / 2]) / 2;
        // } else {
        //     median = vector[length / 2];
        // }
        // std::cout << median << std::endl;
        std::cout << median << std::endl;
    }
    return 0;
}
