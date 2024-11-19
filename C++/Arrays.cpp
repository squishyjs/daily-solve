#include <iostream>

void array_address_pointer() {

    int my_array[] = {1, 2, 3, 4};
    
    // Define a pointer
    int* ptr = my_array;
    
    // Printing address of my_array using array name
    std::cout << "Memory address of my array is: " << &my_array << std::endl;

    // Printing address of the array using pointer
    std::cout << "Memory address of my array is: " << ptr << std::endl;
}

void array_pointers() {
    std::cout << "hello world" << std::endl;
}

int main() {

    array_pointers(); // call the function -> hello world

    array_address_pointer(); // 
    return 0;
}