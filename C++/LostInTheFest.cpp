#include <iostream>
#include <vector>
#include <ostream>


void printContainer(std::vector<int> &intContainer) {
    for (const int &integer : intContainer) {
        std::cout << integer << " ";
    }
    std::cout << std::endl;
}

void solve(int numberOfStudents, std::vector<int> &students) {
    int initPosition = students[numberOfStudents - 1];
    //example 1: 2 4 1 7 5 3
    //example 2: 3 1 2 3
    int index;
    int indexHeightDifference = 0;
    for (int i = 0; i < numberOfStudents; ++i) {
        int currentHeight = students[i];
        if (currentHeight >= initPosition) {
            index = i;
            indexHeightDifference = ((numberOfStudents - 1) - index);
            break;
        }
    }
    std::cout << indexHeightDifference << std::endl;
}

int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;
        std::vector<int> students(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> students[i];
        }
        solve(n, students);
        // printContainer(students);
    }
    return 0;
}
