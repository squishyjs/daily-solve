#include <iostream>
#include <vector>


std::vector<std::vector<int>> initializeTwoDimensionalVector(int rows, int columns, int initialValue);
void printTwoDimensionalVector(const std::vector<std::vector<int>>& vector);

int main() {
    int rows, columns, initialValue;

    std::cout << "Let's build an N x M vector!" << std::endl;

    std::cout << "Enter number of row vectors: ";
    std::cin >> rows;

    std::cout << "\nEnter number of column vectors: ";   
    std::cin >> columns;

    std::cout << "\nEnter initial vector values: ";
    std::cin >> initialValue; 

    std::vector<std::vector<int>> customVec = initializeTwoDimensionalVector(rows, columns, initialValue);
    printTwoDimensionalVector(customVec);

    return 0;
}

std::vector<std::vector<int>> initializeTwoDimensionalVector(int rows, int columns, int initialValue) {
    std::vector<std::vector<int>> vec(rows, std::vector<int>(columns, initialValue));
    return vec;
}

void printTwoDimensionalVector(const std::vector<std::vector<int>>& vector) {
    for (const auto& row : vector) {
        for (int elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}