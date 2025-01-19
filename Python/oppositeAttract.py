# cook your dish here

def solve(length: int, binary_dig: str) -> str: # solution 1
    string: str = ""

    for i in range(length):
        if binary_dig[i] == "0":
            string += "1"
        else:
            string += "0"

    return string


def condensed(length: int, binary_dig: str) -> str: # solution 2
    string = ""
    # return string.join("0" for i in range(length) if binary_dig[i] == "1")
    return string.join("0" if char == "1" else "0" for char in binary_dig[:length])


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        length = int(input())
        string = input()

        solution = condensed(length, string)
        print(solution)

if __name__ == "__main__":
    main()
