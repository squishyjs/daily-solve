# cook your dish here

def solve(length: int, binary_string: str) -> int:
    buffer: int = 0

    for i in range(length - 1):
        curr_binary: str = binary_string[i]
        if curr_binary == binary_string[i + 1]:
            # check max length of substring
            buffer += 2
            for j in range(i + 1, length - 1):
                if binary_string[j] == binary_string[j + 1]:
                    buffer += 1
                elif binary_string[j] != binary_string[j + 1]:
                    break
            length -= buffer # apply the substring (of >= 2, since starting pair)

        length -= 1

    ones = binary_string.count('1')
    zeros = binary_string.count('0')
    
    if (ones == len(binary_string)) or (zeros == len(binary_string)):
        return len(binary_string)
    
    # otherwise, string can be partitioned to eliminate throught to one bin element
    return 1


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        
        n = int(input())
        string = input()

        solution = solve(n, string)
        print(solution)


if __name__ == "__main__":
    main()
