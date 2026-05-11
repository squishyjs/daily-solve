#include <cstdint>
#include <iostream>

using u32 = uint_fast32_t;
using u64 = uint_fast64_t;

static int solution(const int number) {
    // TODO:
    int multiples = 0;
    for (int i = 1; i < number; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            multiples += i;
        }
    }

    return multiples;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << solution(n) << "\n";

    return 0;
}
