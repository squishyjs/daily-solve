#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
#include <string>
#include <algorithm>

#define int64 long long
#define fastIO                              \
    std::ios_base::sync_with_stdio(false);  \
    std::cin.tie(nullptr);                  \
    std::cout.tie(nullptr);                  \


static bool is_subset(const std::vector<int> &want,
                      const std::unordered_set<int> &have) {
    for (const int x : want) {
        if (have.find(x) == have.end()) {
            return false;
        }
    }

    return true;
}

static std::string solve(const std::vector<int> &v_Tr,
                  const std::vector<int> &v_Dr,
                  const std::vector<int> &v_Ts,
                  const std::vector<int> &v_Ds) {
    std::unordered_set<int> Tr(v_Tr.begin(), v_Tr.end());
    std::unordered_set<int> Dr(v_Dr.begin(), v_Dr.end());

    if (is_subset(v_Ts, Tr) && is_subset(v_Ds, Dr)) {
        return "yes";
    }

    return "no";
}

int main(void) {
    fastIO;

    int t;
    std::cin >> t;
    while (t--) {
        // signatures
        int Tr, Dr, Ts, Ds;

        std::cin >> Tr;
        std::vector<int> v_Tr(Tr);
        for (int i = 0; i < Tr; ++i) {
            std::cin >> v_Tr[i];
        }
        std::cin >> Dr;
        std::vector<int> v_Dr(Dr);
        for (int i = 0; i < Dr; ++i) {
            std::cin >> v_Dr[i];
        }
        std::cin >> Ts;
        std::vector<int> v_Ts(Ts);
        for (int i = 0; i < Ts; ++i) {
            std::cin >> v_Ts[i];
        }
        std::cin >> Ds;
        std::vector<int> v_Ds(Ds);
        for (int i = 0; i < Ds; ++i) {
            std::cin >> v_Ds[i];
        }

        std::cout << solve(v_Tr, v_Dr, v_Ts, v_Ds) << "\n";
    }

    return 0;
}
