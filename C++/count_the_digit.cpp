#include <iostream>
#include <string>
#include <vector>
#include <cmath>

class CountDig {
public:
    static int nbDig(int n, int d) {
        // Your implementation goes here

        // Initialize a counter
        // Loop through numbers from 0 to n
        // Square each number
        // Count occurrences of digit 'd'
        // Return the count

        std::vector<int> digits;       
        auto counter = 0; // auto declares to int
        for (int i = 0; i <= n; ++i) {
            int current_digit = pow(i, 2);
            // or: int squared = i * i;
            digits.push_back(current_digit);
        }

        int results = 0;
        for (size_t i = 0; i < digits.size(); ++i) {
            std::string current_string_digit = std::to_string(digits[i]);
            for (char c : current_string_digit) {
                // or: char target_string_digit = '0' + d;
                std::string target_string_digit = std::to_string(d);
                if (c == target_string_digit[0]) {  // check if current string digit is equal to str(target_digit)
                    results++;
                }
            }
        }
        return results;
    }
};

int main() {
    // Example
    // int n = 25;
    // int d = 1;
    int n;
    int d;
    std::cout << "Enter an integer for n: ";
    std::cin >> n;
    
    // check if input succeeded
    if (std::cin.fail()) {
        std::cout << "That was not an integer." << "\n";
        return -1;
    }
    std::cout << "Enter an integer for d: ";
    std::cin >> d;

    // int result = CountDig::nbDig(n, d);
    // std::cout << "Digits: ";
    // for (const auto& num : result) {
    //     std::cout << num << " ";
    // }
    // std::cout << std::endl;
    int result = CountDig::nbDig(n, d);
    std::cout << "Digits = " << result << std::endl;
    
    return 0;
}