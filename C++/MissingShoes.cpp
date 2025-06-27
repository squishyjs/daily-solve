#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    int l, r;
    std::cin >> l >> r;
    
    int max = std::max(l, r);
    int min = std::min(l, r);

    printf("%d\n", max - min);

    return EXIT_SUCCESS;
}
