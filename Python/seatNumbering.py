# cook your dish here

from re import L


def solve(seat_number: int) -> str:
    lower_double = [int(i) for i in range(1, 11)]
    lower_single = [int(i) for i in range(11, 16)]
    upper_double = [int(i) for i in range(16, 26)]
    upper_single = [int(i) for i in range(26, 31)]

    if seat_number in lower_double:
        return "Lower Double"
    if seat_number in lower_single:
        return "Lower Single"
    if seat_number in upper_double:
        return "Upper Double"
    if seat_number in upper_single:
        return "Upper Single"
    
def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())

        solution = solve(n)
        print(solution)


if __name__ == "__main__":
    main()
