#include <ios>
#include <iostream>
#include <ratio>
#include <string>
#include <vector>

void example() {
    std::string john = "JOHN";
    std::cout << john[3];
}

static std::string solve(const int n, const int m,
                         const std::string &a,
                         const std::string &b) {

    std::string result;
    for (int i = 0; i < std::max(n, m); ++i) {
        if (a[i] == b[i]) {
            result += a[i];
            continue;
        }

        // otherwise
        break;
    }

    return result;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n >> m;
        std::string a, b;
        std::cin >> a >> b;
        std::cout << solve(n, m, a, b);
        std::cout << "\n";
    }

/*     example(); */

    return 0;
}
