#include <ios>
#include <iostream>
#include <string>
#include <vector>

std::string solve(const int n, const int x, const std::vector<int> &arr) {
    bool contains_element = false;
    for (const int &num : arr) {
        if (num == x)
        {
            contains_element = true;
            break;
        }
    }

    if (contains_element)
    {
        return "YES";
    }

    return "NO";
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // nothing
    return 0;
}
