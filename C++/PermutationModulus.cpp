#include <iostream>
#include <vector>


void printVector(std::vector<int> &vector) {
    for (const int &element : vector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

std::vector<int> solve(int size) {
    //create vector
    std::vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);

    if (size == 2)
        return arr;
    arr.pop_back();
    int tempEl = 3;
    for (int i = 1; i < size - 1; ++i) {
        // std::cout << "Size is: " << tempSize << std::endl;
        arr.push_back(tempEl);
        tempEl++;
    }
    arr.push_back(1);

    return arr;
}

int main() {

    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int n;
        std::cin >> n;
        
        std::vector<int> array = solve(n);
        printVector(array);
        // std::cout << "Vector finsihed." << "\n";
    }
    return 0;
}
