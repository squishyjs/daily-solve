#include <iostream>
#include <vector>

void vectorArray() {

    std::vector<int> my_vector = {5, 10, 15, 20, 25, 30, 35};

    // loop over my vector -> requires C++ 11 version
    for (size_t i = 0; i< my_vector.size(); ++i) {
        std::cout << "Element " << i << " = " << my_vector[i] << "\n";
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

    array_pointers(); // call the function -> hello world
    array_address_pointer(); // pointing to array memory addresses
    vectorArray();
    return 0;
}