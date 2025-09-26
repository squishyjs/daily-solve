#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>


bool isEven(int integer) {
    return integer % 2 == 0;
}

int solve(int size, std::vector<int>& dyn_array) {
    int maxAltSum = std::accumulate(dyn_array.begin(), dyn_array.end(), 0);

    std::vector<int> tempVector(size);
    for (int index = 0; index < (size - 1); ++index) {
        int currElement = abs(dyn_array[index]);
        int nextElement = abs(dyn_array[index + 1]);
        if ((index == 0) || (isEven(index))) {
            if (nextElement > currElement) {
                //temp swap
                int temp = abs(dyn_array[index]);
                dyn_array[index] = nextElement;
                dyn_array[index + 1] = temp;
            }
        }
        int currAltSum = std::accumulate(dyn_array.begin(), dyn_array.end(), 0);
        if (currAltSum < maxAltSum) {
            maxAltSum = currAltSum;
        }
    }
    return maxAltSum;
}

int computeAlternatingSum(const std::vector<int>& arr) {
    int sum = 0;
    for (size_t i = 0; i < arr.size(); ++i) {
        //if index is even, add the current array element
        //else minus the current element
        sum += (i % 2 == 0 ? 1 : -1) * std::abs(arr[i]);
    }
    return sum;
}

int solve2(int size, std::vector<int>& dyn_array) {
    //brute force: compute each swap and check against maxAltSum
    int maxAltSum = computeAlternatingSum(dyn_array);
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            //temp swap to check currAltSum vs maxAltSum
            std::swap(dyn_array[i], dyn_array[j]);

            // Compute the new alternating sum after the swap
            int currAltSum = computeAlternatingSum(dyn_array);

            maxAltSum = std::max(maxAltSum, currAltSum);

            //swap back
            std::swap(dyn_array[i], dyn_array[j]);
        }
    }

    return maxAltSum;
}

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        std::vector<int> vector(n, 0);
        for (int i = 0; i < n; i++) {
            std::cin >> vector[i];
        }


        std::cout << solve2(n, vector);
        std::cout << std::endl;
    }

    return 0;
}
