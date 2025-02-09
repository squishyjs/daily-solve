# cook your dish here
def convert_char_cyclic(char: str) -> str:
    dictionary = {
        "A": "B",
        "B": "C",
        "C": "D",
        "D": "E",
        "E": "F",
        "F": "G",
        "G": "H",
        "H": "I",
        "I": "J",
        "J": "K",
        "K": "L",
        "L": "M",
        "M": "N",
        "N": "O",
        "O": "P",
        "P": "Q",
        "Q": "R",
        "R": "S",
        "S": "T",
        "T": "U",
        "U": "V",
        "V": "W",
        "W": "X",
        "X": "Y",
        "Y": "Z",
        "Z": "A"
    }

    return dictionary[char]

def solve(advitiya: str) -> int:
    MATCH_STRING = "ADVITIYA"

    count: int = 0
    for i in range(len(MATCH_STRING)):
        curr_char = advitiya[i].upper()
        if curr_char != MATCH_STRING[i]:
            corr_char = MATCH_STRING[i]
            while curr_char != corr_char:
                count += 1
                curr_char = convert_char_cyclic(curr_char)

    return count


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):

        string = input()

        solution = solve(string)
        print(solution)

if __name__ == "__main__":
    main()
