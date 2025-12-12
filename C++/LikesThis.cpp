#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <ios>
#include <iostream>
#include <string>
#include <vector>


std::string likes(const std::vector<std::string> &names)
{
    std::string statement;
    size_t length = names.size();
    switch (length) {
        case 0:
            return "no one likes this";
        case 1:
            return names[0] + " likes this";
        case 2:
            return names[0] + " and " + names[1] + " like this";
        case 3:
            return names[0] + ", " + names[1] + " and " + names[2] + " like this";
        default:
            std::string remaining = std::to_string(length - 2);
            return names[0] + ", " + names[1] + " and " + remaining + " others like this";
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::vector<std::string> example = {
        "John"
    };

    std::string res = likes(example);
    std::cout << res << std::endl;
}
