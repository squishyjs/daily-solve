#include <iostream>
#include <vector>
#include <string>

std::vector<std::vector<std::string>> initializeTwoDimensionalVector(int rows, int columns, const std::string& vectorValue);
void printTwoDimensionalVector(const std::vector<std::vector<std::string>>& vector);

int main() {
    int rows, columns;
    std::string vectorValue;

    std::cout << "Let's build an N x M vector!" << std::endl;

    std::cout << "Enter number of row vectors: ";
    std::cin >> rows;

    std::cout << "Enter number of column vectors: ";  
    std::cin >> columns;

    std::cout << "Enter initial vector values: ";
    std::cin >> vectorValue; 

    std::vector<std::vector<std::string>> customVec = initializeTwoDimensionalVector(rows, columns, vectorValue);
    printTwoDimensionalVector(customVec);

    return 0;
}

std::vector<std::vector<std::string>> initializeTwoDimensionalVector(int rows, int columns, const std::string& vectorValue) {
    std::vector<std::vector<std::string>> vec(rows, std::vector<std::string>(columns, vectorValue));
    return vec;
}

void printTwoDimensionalVector(const std::vector<std::vector<std::string>>& vector) {
    for (const auto& row : vector) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}