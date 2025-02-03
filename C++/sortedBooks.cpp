#include <iostream>
#include <vector>


int main() {
    
    int testCases;
    std::cin >> testCases;

    while (testCases--) {
        std::vector<int> sortedBooks;
        int n;
        std::cin >> n;
        for (int i = 0; i < n; ++i) { // read input vector values
            int value;
            std::cin >> value;
            sortedBooks.push_back(value);
        }
        // brute force method
        std::vector<int> greaterList;
        for (int i = 0; i < n; ++i) {
            int curreEl = sortedBooks[i];

            int count = 0;
            for (int j = i; j < n; ++j) { // increment counter
                if (sortedBooks[j] > curreEl)
                    count++;
            }
            // find how many elements greater than current element, and push it back
            greaterList.push_back(count);
        }
        std::cout << "Printing the final list...";
        for (const int& element : greaterList) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

    }

    return 0;
}
