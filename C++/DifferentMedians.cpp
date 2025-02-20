#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

void solve(int n) {
    //essentially get the set of numbers between 1 and n
    //vector push back these elements
    std::vector<int> vector;
    for (int i = 1; i <= n; ++i) {
        std::vector<int> tempVector(i);
        for (int j = 0; j < i; ++j) {
            tempVector[j] = j + 1;
        }
        //get current median -> calculate size
        int curr_median;
        int size = tempVector.size();
        
        if (size % 2 == 1) {
            curr_median = tempVector[size / 2];
        } else {
            curr_median = (tempVector[size / 2 - 1] + tempVector[size / 2]) / 2;
        }

        while (std::find(vector.begin(), vector.end(), curr_median) != vector.end()) {
            curr_median += 1;
        }
        vector.push_back(curr_median);
    }
    
    for (const int& element : vector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

void solve_two(int n) {
    std::vector<int> vector(n);
    for (int i = 1; i < n; i += 2) { //even
        vector[i] = (i + 1) / 2;
    }
    for (int i = 0; i < n; i += 2) { //odd
        vector[i] = n - (i / 2);
    }
    
    for (const int& element : vector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    int testCases;
    std::cin >> testCases;

    while (testCases--) {
        int n;
        std::cin >> n;
        
        solve_two(n);
    }

    return 0;
}
