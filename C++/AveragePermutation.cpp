#include <iostream>
#include <vector>

void printVector(std::vector<int> &vector) {
    for (const int &element : vector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

void solve(int n) {
    std::vector<int> vector;
    vector.push_back(n - 1);
    vector.push_back(n - 2);
    for (int i = 1; i < n - 3; ++i) {
        vector.push_back(i);
    }
    if (n > 3) {
        vector.push_back(n - 3);
    }
    vector.push_back(n);
    printVector(vector);
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n; std::cin >> n;
        solve(n);
    }
    return 0;
}
