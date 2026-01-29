def solve(x: str) -> int:
    vowels = ["a", "e", "i", "o", "u"]

    count: int = 0
    for char in x:
        if char in vowels:
            count += 1

    return count

def main() -> None:
    x = input()
    print(solve(x))

if __name__ == "__main__":
    main()
