#include <iostream>
#include <vector>

// Create function to reverse array
// it will take parameters of array pointer and size (two)
void reverseVector(std::vector<int>& vec, int vecSize) {
    // reverse the vector
    for (int i = 0; i < vecSize / 2; ++i) {
        std::swap(vec[i], vec[vecSize - i - 1]);
    }
}

void reverseVectorAlgorithm(std::vector<int>& vec, int vecSize) {
    std::reverse(vec.begin(), vec.end());
}

void printVector(std::vector<int> vector) {
    for (const auto& integer : vector) {
        std::cout << integer << " ";
    }
}

bool isPalindrome(std::vector<int>&vec, int vecSize) {
    int count = 0;
    for (int i = 0; i < vecSize / 2; ++i) {
        if (vec[i] == vec[vecSize - i - 1]) {
            count++;
        }
    }
    if (count == (vecSize / 2)) {
        return true;
    }
    return false;
    /*
    alternatively:
    int vecSize = vec.size();
    for (int i = 0; i < vecSize / 2; ++i) {
        if (vec[i] != vec[vecSize - i - 1]) {
            return false;
        }
    }
    return true;
    */
}

int main() {
    int arraySize;
    std::vector<int> myVector;

    std::cout << "Enter the size of the vector: ";
    std::cin >> arraySize;

    std::cout << "Enter the elements of the vector: ";
    for (int i = 0; i < arraySize; ++i) {
        int element;
        std::cin >> element;
        myVector.push_back(element);
    }
    std::cout << "Original vector: " << std::endl;
    printVector(myVector);
    
    // Reverse the vector
    // reverseVector(myVector, arraySize);
    reverseVectorAlgorithm(myVector, arraySize);
    std::cout << "Reversed vector: " << std::endl;
    printVector(myVector);

    std::cout << "Is the vector a palindrome? " << ((isPalindrome(myVector, arraySize)) ? "Yes" : "No");
    

    return 0;
}