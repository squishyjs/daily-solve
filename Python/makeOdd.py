# cook your dish here
def is_even(n: int) -> bool:
    return n % 2 == 0

def is_odd(n: int) -> bool:
    return n % 2 != 0

def is_equal(charA: str, charB: str) -> bool:
    return (charA == charB) and (charB == charA)

def solve(length: int, stringA: str, stringB: str) -> str:
    if (stringA.count('1') % 2 != 0) or (stringB.count('1') % 2 != 0):
        return "YES"

    count: int = 0
    for i in range(length):
        curr_a = stringA[i]
        curr_b = stringB[i]

        if not is_equal(curr_a, curr_b):
            count += 1
            break
    
    return "YES" if count == 1 else "NO"


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):

        n = int(input())
        a = input()
        b = input()

        solution = solve(n, a, b)
        print(solution)

if __name__ == "__main__":
    main()
