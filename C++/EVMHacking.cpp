#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

static const int length = 3;

std::string solve(int a, int b, int c,
                  int p, int q, int r)
{
    float total_votes = p + q + r;
    float half_votes = total_votes / 2;

    std::vector<float> chef_votes = {(float)a, (float)b, (float)c};
    std::vector<float> machine_votes = {(float)p, (float)q, (float)r};

    // check already winning condition
    float total_chef_votes = a + b + c;
    if (total_chef_votes > half_votes) {
        return "YES";
    }

    // else
    for (int i = 0; i < length; ++i) {
        int temp = total_chef_votes;
        temp -= chef_votes[i];
        temp += machine_votes[i];

        // check win condition
        if (temp > half_votes) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c, p, q, r;
        std::cin >> a >> b >> c;
        std::cin >> p >> q >> r;

        std::string res = solve(a, b, c, p, q, r);
        std::cout << res << std::endl;
    }

    return 0;
}
