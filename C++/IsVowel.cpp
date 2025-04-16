#include <iostream>
#include <vector>

bool isVowel(char &specificCharacter) {
    std::vector<char> vowels = {'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 5; ++i) {
        char currChar = vowels[i];
        if (specificCharacter == currChar) {
            return true;
        }
    }
    return false;
}
//main function
int main() {
    // int testCases;
    // std::cin >> testCases;
    // while (testCases--) {
    //     char ch;
    //     std::cin >> ch;
    //     bool result = isVowel(ch);
    //     if (result) {
    //         std::cout << "Vowel\n";
    //     } else {
    //         std::cout << "Consonant\n";
    //     }
    // }
    char ch;
    std::cin >> ch;
    // std::cout << ("Vowel\n" ? isVowel(ch) : "Consonant\n");
    if (isVowel(ch)) {
        std::cout << "Vowel\n";
    } else {
        std::cout << "Consonant\n";
    }
    return 0;
}
