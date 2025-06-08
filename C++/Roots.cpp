#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>
#include <cmath>

std::pair<double, double> findRoots(double a, double b, double c)
{
    std::pair<double, double> roots{};

    double firstRoot = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
    double secondRoot = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

    roots.first = firstRoot;
    roots.second = secondRoot;

    return roots;
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}

#endif
