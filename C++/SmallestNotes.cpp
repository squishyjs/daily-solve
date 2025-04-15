/* Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to compute smallest number of notes that will combine to give Rs. N.

Input

The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the smallest number of notes that will combine to give N, in a new line. 

Example:
Input 1200 -> Output: 12
Input 500  -> Output: 5
Input 247  -> Output: 7
*/
#include <iostream>
#include <vector>

int solveAgain(int &rupees) {
    if (rupees == 1) {
        return 1;
    }

    std::vector<int> table {100, 50, 10, 5, 2, 1};
    int operations = 0;
    for (int i = 0; i < table.size(); ++i) {
        int currentDenomination = table[i];
        int used = rupees / currentDenomination;

        operations += used;

        rupees -= used * currentDenomination;
    }

    return operations;
}

// int solveSmallestNotes(int &rupees) {
//     if (rupees == 1) {
//         return 1;
//     }
//     std::vector<int> table {100, 50, 10, 5, 2, 1};
//     int operations = 0;
//     int currIndex = 0;
//     while (rupees > 0) {
//         std::cout << "Rupees is: " << rupees;
//         //cook your dish here
//         if (rupees - table[currIndex] > 0) {
//             //some code that counts the amount of operations before moving to the next one
//             int denomination = table[currIndex];
//             operations += (rupees / denomination);
//             //update rupees to smaller value
//             rupees = rupees - (operations * denomination);
//             std::cout << "Rupees is now: " << rupees;
//         } else {
//             currIndex++;
//         }
//     }
//     return operations;
// }

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int rupees;
        std::cin >> rupees;
        std::cout << solveAgain(rupees);
        std::cout << std::endl;
    }
    return 0;
}
