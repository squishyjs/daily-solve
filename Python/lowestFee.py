# cook your dish here

def solution() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        a, b, c = map(int, input().split())

        print(a + b + c - min(a, b, c))


if __name__ == "__main__":
    solution()
