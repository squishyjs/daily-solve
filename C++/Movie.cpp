#include <ios>
#include <iostream>
#include <string>
#include <algorithm>

using int64 = long long;

int64 solve(const int n, const int m, const int a, const int b, const int c) {
    // buy N movie, M buckets
    // price movie = A, price bucket = B
    // 1 movie + 1 bucket = C
    // output MINIMUM cost

    int og_combo = a + b;
    int best_combo_price = std::min(og_combo, c);
    int min_combo_ppl = std::min(n, m);

    int min_combo_price = min_combo_ppl * best_combo_price;
    int remaining_price = (std::max(n, m) - min_combo_ppl) * (og_combo);

    return min_combo_price + remaining_price;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        int n, m, a, b, c;
        std::cin >> n >> m >> a >> b >> c;

        std::cout << solve(n, m, a, b, c);
        std::cout << "\n";
    }

    return 0;
}
