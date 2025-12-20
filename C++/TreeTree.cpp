#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define fastIO                            \
    ios::sync_with_stdio(false);          \
    cin.tie(nullptr);                     \
    cout.tie(nullptr);

using int64 = long long;

int64 solve(int n, int k, const std::vector<std::vector<int>>& g) {
    // TODO: run dfs/lca

    return EXIT_SUCCESS;
}

int main(void) {
    fastIO;

    int q;
    std::cin >> q;
    while (q--) {

        // vertices and distinct integers
        int n, k;
        std::cin >> n >> k;

        // adjacency list
        std::vector<std::vector<int>> g(n + 1);
        for (int i = 0; i < n - 1; ++i)
        {
            // edge between u & v
            int u, v;
            std::cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        std::cout << solve(n, k, g);
        std::cout << "\n";
    }

    return 0;
}
