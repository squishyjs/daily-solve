#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>


int solve(int length, std::vector<int> vectorA, std::vector<int> vectorB) {
    for (int i = 0; i < length; ++i) {
        int pivot = vectorA[i];
        std::vector<std::pair<int, int>> tempVecPair;
        for (int j = 0; j < length; ++j) {
            tempVecPair.push_back({std::abs(vectorA[j] - pivot), vectorA[j]});
        }
        //sort vector pair
        std::sort(tempVecPair.begin(), tempVecPair.end());
        
        std::vector<int> check(length);
        for (int i = 0; i < length; ++i) {
            check[i] = tempVecPair[i].second;
        }
        if (check == vectorB) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;
        std::vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> A[i];
        }
        std::vector<int> B(n);
        for (int j = 0; j < n; ++j) {
            std::cin >> B[j];
        }
        //call solution
        int solution = solve(n, A, B);
        std::cout << solution << std::endl;
    }
    return 0;
}
