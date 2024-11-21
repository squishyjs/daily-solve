#include <iostream>
#include <vector>
#include <string>

// Template function to print vectors
template <typename T>
void printVector(const std::vector<T>& vec, const std::string& vecName) {
    std::cout << vecName << ": ";
    if (vec.empty()) {
        std::cout << "Vector is empty";
    } else {
        for (const auto& element : vec) {
            std::cout << element << " ";
        }
    }
    std::cout << std::endl;
}

void vectorIterators() {
    
    // declare iterator
    std::vector<int>::iterator my_vector_iterator;

    std::vector<int> number = {1, 2, 3};

    // initialize the iterator with the first element
    my_vector_iterator = number.begin();
    // iterator points to the last element
    my_vector_iterator = number.end() - 1;
    std::cout << "num[4] = " << *my_vector_iterator;

    // vector iterator points to the third element
    std::cout << "number[4] = " << *my_vector_iterator << std::endl;

    // print the vector element 
    for (size_t i = 0; i < number.size(); ++i) {
        std::cout << "The individual string element is: " << number[i] << std::endl;
    }
}

void moreVectorFunctions() {
    /* 
    size() - returns the number of elements present in the vector
    clear() - removes all the elements of the vector
    front() - retunrs the first element of the vector
    back() - returns the last element of the vector
    empty() - returns 1 (true) if the vector is empty
    capacity() - check the overall size of a vector
    */
    std::vector<std::string> my_vector_string = {"my", "name", "is", "John"};
    
    printVector(my_vector_string, "Initial Vector");

    // use size()
    std::cout << "Size of a vector: " << my_vector_string.size() << std::endl;

    // use capacity()
    std::cout << "Capacity of vector: " << my_vector_string.capacity() << std::endl;

    // use front()
    if (!my_vector_string.empty()) {
        std::cout << "First element (front): " << my_vector_string.front() << std::endl;
    }   

    // use back()
    if (!my_vector_string.empty()) {
        std::cout << "Last element (back): " << my_vector_string.back() << std::endl;
    }

    // use empty()
    if (my_vector_string.empty()) {
        std::cout << "The vector is empty" << "\n";
    } else {
        std::cout << "The vect is not empty" << "\n";
    }
    // alternatively, use ternary operator:
    std::cout << "Is the vector empty?: " << (my_vector_string.empty() ? "Yes" : "No") << std::endl;

    // use clear()
    std::cout << "Is vector empty? " << (my_vector_string.empty() ? "It is" : "It is not") << std::endl;
    std::cout << "Now clearing vector..." << "\n";
    my_vector_string.clear();
    std::cout << "Is vector empty? " << (my_vector_string.empty() ? "It is" : "It is not") << std::endl;

    printVector(my_vector_string, "Cleared vector");
}


void vectorFunctions() {

    std::vector<int> foo_vector = {5, 10, 15, 20, 25, 30};
    
    std::cout << "Initial vector: ";

    for (const int& i : foo_vector) { // printing the intial vector
        std::cout << i << " ";
    }
    
    // adding integers 6 and 7 to the vector
    foo_vector.push_back(35);
    foo_vector.push_back(40);

    // output change
    std::cout << "\n Updated Vector: ";
    for (const int& i : foo_vector) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    // accessing vector elements
    // loop over vector using .at()

    for (int i = 0; i < foo_vector.size(); ++i) {
        std::cout << "Element at index " << i << " is: " << foo_vector.at(i);
        std::cout << "\n";
    }
    // loop over vector using '[]' square brackets
    for (int i = 0; i < foo_vector.size(); ++i) {
        std::cout << "Element = " << foo_vector[i];
        std::cout << "\n";
    }

    // changing vector element
    foo_vector[0] = 100;
    std::cout << "The vector is now: " << std::endl;
    for (const int& i : foo_vector) {
        std::cout << i << " " << "\n";
    }

    // removing vector element
    foo_vector.pop_back(); // O(1)
    std::cout << "The vector is now: " << std::endl;
    for (const int& i : foo_vector) {
        std::cout << i << " " << "\n";
    }
    
    // removing vector element at specific position
    std::cout << "Removing the element '20'..." << "\n";
    for (size_t i = 0; i < foo_vector.size(); ) {
        if (foo_vector[i] == 20) {
            foo_vector.erase(foo_vector.begin() + i);
            // do not increment 'i' to check the new element the new element at this index
        } else {
            ++i;
        }
    }
    std::cout << "The vector is now: " << std::endl;
    for (const int& i : foo_vector) {
        std::cout << i << " ";
    }  // YES!! it works!!
}

void vectorArray() {

    // std::vector<int> my_vector = {5, 10, 15, 20, 25, 30, 35};

    std::vector<int> my_vector = {1, 2, 3, 4, 5, 6};
    // iterating vector using for-loop
    std::cout << "Looping using for-loop:" << "\n";
    for (size_t i = 0; i< my_vector.size(); ++i) {
        std::cout << "Element " << i << " = " << my_vector[i] << "\n";
    }

    // iterating vector using ranged loop #1
    std::cout << "Using ranged-loop:" << "\n";
    for (const int& i : my_vector) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    // iterating vector using ranged loop # 2
    std::cout << "Using ranged-loop: " << "\n";
    for (int i : my_vector) {
        std::cout << i << " ";
    }
}

void array_address_pointer() {

    int my_array[] = {1, 2, 3, 4};
    
    // Define a pointer
    int* ptr = my_array;
    
    // Printing address of my_array using array name
    std::cout << "Memory address of my array is: " << &my_array << std::endl;

    // Printing address of the array using pointer
    std::cout << "Memory address of my array is: " << ptr << std::endl;

    size_t my_array_size = sizeof(my_array) / sizeof(my_array[0]);

    for (size_t i = 0; i < my_array_size; ++i) {
        std::cout << my_array[i] << "\n";
    }
}

void array_pointers() {
    std::cout << "hello world" << std::endl;
}

int main() {

    // array_pointers(); // call the function -> hello world
    // array_address_pointer(); // pointing to array memory addresses
    // std::cout << "Printing the vector array function" << std::endl;
    // vectorArray();

    // std::cout << "Printing array function operations" << std::endl;
    // vectorFunctions();
    
    std::cout << "Exploring other vector functions in C++" << "\n";
    moreVectorFunctions();   

    return 0;
}