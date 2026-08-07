#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

bool bishop_can_move(const int x1, const int y1,
        const int x2, const int y2)
{
    return std::abs(x1 - x2) == std::abs(y1 - y2);
}

static int solve(const int x1, const int y1,
                 const int x2, const int y2)
{
    const std::pair<int, int> board[8][8] = {
        { {1,1}, {1,2}, {1,3}, {1,4}, {1,5}, {1,6}, {1,7}, {1,8} },
        { {2,1}, {2,2}, {2,3}, {2,4}, {2,5}, {2,6}, {2,7}, {2,8} },
        { {3,1}, {3,2}, {3,3}, {3,4}, {3,5}, {3,6}, {3,7}, {3,8} },
        { {4,1}, {4,2}, {4,3}, {4,4}, {4,5}, {4,6}, {4,7}, {4,8} },
        { {5,1}, {5,2}, {5,3}, {5,4}, {5,5}, {5,6}, {5,7}, {5,8} },
        { {6,1}, {6,2}, {6,3}, {6,4}, {6,5}, {6,6}, {6,7}, {6,8} },
        { {7,1}, {7,2}, {7,3}, {7,4}, {7,5}, {7,6}, {7,7}, {7,8} },
        { {8,1}, {8,2}, {8,3}, {8,4}, {8,5}, {8,6}, {8,7}, {8,8} }
    };

    if (x1 == x2 && y1 == y2) return 0;

    if (bishop_can_move(x1, y1, x2, y2)) return 1;

    if ((x1 + y1) % 2 == (x2 + y2) % 2) return 2;

    return -1;

}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        std::cout << solve(x1, y1, x2, y2);
        std::cout << "\n";
    }

    return 0;
}
