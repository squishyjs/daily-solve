
def solve(length: int, string: str) -> str:
    ones = string.count('1')
    zeros = string.count('0')

    #edge
    if (ones == length) or (zeros == length):
        return "Ramos"
    
    # #edge
    # if (length <= 2):
    #     return "Ramos"
    #  
    # winner_index: int = 0
    # for i in range(0, length, 2):
    #     curr_bin = string[i]
    #     # if (curr_bin != string[i + 1]):
    #     #     winner_index += 1
    #     print(f"Current binary element is: {curr_bin}")
    minimum_moves = min(ones, zeros)
    if (minimum_moves % 2 != 0):
        return "Zlatan"

    return "Ramos"


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())
        s = input()

        solution = solve(n, s)
        print(solution)

if __name__ == "__main__":
    main()
