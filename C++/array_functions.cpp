#include <iostream>

void printArraySized(int arr[3], int n) {

    std::cout << "Array as Sized Array Arugment: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printArrayUnsized(int arr[], int n) {
    std::cout << "Array as Unsized Array Argument: ";
    for (int i = 0; i < n; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

void printArrayPointer(int* ptr, int n) {
    // print array elements using pointer "ptr"
    // that store the address of array passed
    std::cout << "Array as Pointer Argument: ";
    for (int i = 0; i < n; ++i) {
        std::cout << ptr[i] << " ";
    }
}

int main() {

    int arr[] = {10, 20, 30};

    printArraySized(arr, 3);
    printArrayUnsized(arr, 3);
    printArrayPointer(arr, 3);

    return 0;
}