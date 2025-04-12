#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <algorithm>


bool sameIngredients(const std::string &recipe1, const std::string &recipe2) {
    std::set<char> set1(recipe1.begin(), recipe1.end());
    std::set<char> set2(recipe2.begin(), recipe2.end());

    return set1 == set2;
}

bool disjointIngredients(const std::string &recipe1, const std::string &recipe2) {
    std::set<char> set1(recipe1.begin(), recipe1.end());
    std::set<char> set2(recipe2.begin(), recipe2.end());

    std::set<char> intersection;
    std::set_intersection(
        set1.begin(), set1.end(),
        set2.begin(), set2.end(),
        std::inserter(intersection, intersection.begin())
    );

    return intersection.empty();
}

std::string granamaSolve(std::string &first, std::string &second) {
    // if (sameIngredients(first, second) || disjointIngredients(first, second)) {
    //     return "YES";
    // }
    std::multiset<char> sset1(first.begin(), first.end());
    std::multiset<char> sset2(second.begin(), second.end());

    if (sameIngredients(first, second) && sset1 != sset2) {
        return "NO";
    }
    //otherwise, inconsistent ingredients ->
    return "YES";
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        std::string recipeOne, recipeTwo;
        std::cin >> recipeOne >> recipeTwo;
        std::cout << granamaSolve(recipeOne, recipeTwo) << std::endl;
    }
    return 0;
}
