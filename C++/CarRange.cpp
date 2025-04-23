#include <iostream>

const int DRIVER = 1;

int solve(int people, int base_economy, int fuel) {
    int maxx = 0;
    /* cook your dish here */
    int number_of_extra_people = people - DRIVER;
    base_economy -= number_of_extra_people;

    if (base_economy <= 0) {
        return 0;
    }

    maxx = fuel * base_economy;
    return maxx;
}

int main() {
    int test_cases;
    std::cin >> test_cases;
    while (test_cases--) {
        int p, m, v; std::cin >> p >> m >> v;
        int max_distance = solve(p, m, v);
        std::cout << max_distance << std::endl;
    }
    return 0;
}
