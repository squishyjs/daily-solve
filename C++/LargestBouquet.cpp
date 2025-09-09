#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

bool is_even(int x) {
    return (x % 2 == 0);
}

int solve(int Mg, int My, int Mr, int Og, int Oy, int Or, int Pg, int Py, int Pr) {
    // impossible bouqet
    if (std::max({Mg, My, Mr, Og, Oy, Or, Pg, Py, Pr}) == 0) {
        return 0;
    }

    int total_maple = Mg + My + Mr;
    int total_oak = Og + Oy + Or;
    int total_poplar = Pg + Py + Pr;
    int green = Mg + Og + Pg;
    int yellow = My + Oy + Py;
    int red = Mr + Or + Pr;

    int largest = std::max({total_maple, total_oak, total_poplar, green, yellow, red});

    if (is_even(largest)) {
        return largest - 1;
    }

    return largest;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int Mg, My, Mr;
        std::cin >> Mg >> My >> Mr;
        int Og, Oy, Or;
        std::cin >> Og >> Oy >> Or;
        int Pg, Py, Pr;
        std::cin >> Pg >> Py >> Pr;

        int res = solve(Mg, My, Mr,
                        Og, Oy, Or,
                        Pg, Py, Pr);
        std::cout << res << std::endl;
    }

    return 0;
}
