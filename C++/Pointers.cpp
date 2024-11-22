#include <iostream>
#include <vector>
#include <memory>


// Functions material
void pointerIntroduction();
void pointerArithmetic();
void memoryAllocation();
void smartPointers();
void dynamicVectorAllocation();


int main() {
    // Main function loop -- feel free to learn by commenting out specific ones
    // pointerIntroduction();
    // pointerArithmetic();
    dynamicVectorAllocation();


    return 0;
}

void pointerIntroduction() {

    // Pointer declaration
    int *my_ptr;

    // Initialization
    int var = 10;
    my_ptr = &var;

    // Dereferencing (accessing pointer)
    int value = *my_ptr; // value is now 10

    /* Pointers to Different Types */

    // Pointer to Array
    /*

    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; // points to first element of array
    
    // Pointer to Vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int>* ptr = &vec;

    // Pointer to String
    std::string string = "Hello";
    std::string* ptr = &string;

    // Pointer to a function
    void func() {
        std:;cout << "Hello, World!" << std::endl;
    }
    void (*funcPtr)() = &func;

    // Pointer to a Class
    class MyClass {
    public:
        void display() {
            std::cout << "Hello, Class!" << std::endl;
        }
    };
    MyClass obj;
    MyClass* ptr = &obj;
    
    */
    
}

void pointerArithmetic() {
    int my_var = 5;
    int *ptr = &my_var;

    std::cout << ptr << std::endl; // Output: 0x16f8831bc (memory address of my_var)
    std::cout << *ptr << std::endl; // 5 (value of my_var)

    int arr[5] = {1, 2, 3, 4, 5};
    int *arr_ptr = arr + 2;

    std::cout << arr_ptr << std::endl; // Output: memory address of third element
    std::cout << *arr_ptr << std::endl; // Output: 3 (value of third element in array)

}

void memoryAllocation() {
    /* Dynamic memory allocation allows you to allocate memory at run-time (as opposed to a specified
       amount of memory in compile-time) using pointers. This is useful when the size of the data 
       structure is not known at compilte time 
       
       Key Functions:
            1. new and delete: Used for single variables.
            2. new[] and delete[]: Used for arrays.
    */

   // Allocate memory for an integer
   int* ptr = new int; // (or malloc in C)
   *ptr = 10; 
   std::cout << "Value of integer: " << *ptr << std::endl;

   // Deallocate memory
    delete ptr;

}

void smartPoitners() {
    // Using unique_ptr for single variable
    std::unique_ptr<int> ptr = std::make_unique<int>(10);
    std::cout << "Value: " << *ptr << std::endl;

    // Using unique_ptr for array
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(5);
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "Value at arr[" << i << "]: " << arr[i] << std::endl;
    }

}

void dynamicVectorAllocation() {
    // Using raw pointers (not recommended)
    std::vector<int>* vecPtr = new std::vector<int>();
    vecPtr->push_back(1);
    vecPtr->push_back(2);
    vecPtr->push_back(3);
    vecPtr->push_back(4);

    for (int i = 0; i < vecPtr->size(); ++i) {
        std::cout << "Value at vecPtr[" << i << "] is: " << vecPtr->at(i) << std::endl;
    }
    
    // Deallocate memory
    delete vecPtr;

    // Using smart pointers (recommended)
    std::unique_ptr<std::vector<int>> smartVecPtr = std::make_unique<std::vector<int>>();
    vecPtr->push_back(5);
    vecPtr->push_back(6);
    vecPtr->push_back(7);
    vecPtr->push_back(8);

    for (int i = 0; i < smartVecPtr->size(); ++i) {
        std::cout << "Value at smartVec[" << i << "] is: " << smartVecPtr->at(i) << std::endl;
    }
}