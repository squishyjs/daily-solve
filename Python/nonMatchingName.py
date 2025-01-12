# cook your dish here

def solve(alice_string: str, bob_string: str) -> str:
    letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

    for char in alice_string: 
        if char in letters:
            letters.remove(char)

    for char in bob_string:
        if char in letters:
            letters.remove(char)

    return "No" if not letters else "Yes"


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):

        a, b = map(int, input().split())
        alice = input()
        bob = input()

        solution = solve(alice, bob)
        print(solution)

if __name__ == "__main__":
    main()
