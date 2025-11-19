#include <string>
#include <algorithm>
#include <unordered_map>

std::string rps(const std::string &p1, const std::string &p2)
{
    if (p1 == p2) {
        return "Draw!";
    }

    // example:
    // "scissors" : "rock" --> player 2 wins
    std::unordered_map<std::string, std::string> h_map = {
        {"scissors", "paper"},
        {"paper", "rock"},
        {"rock", "scissors"}
    };

    if (h_map[p1] != p2) {
        return "Player 2 won!";
    }

    return "Player 1 won!";
}
