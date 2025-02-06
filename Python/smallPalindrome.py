# cook your dish here

def solve(ones: int, twos: int) -> int:
    '''
    Find the smallest palindrome number given x number of ones,
    and y number of twos. NOTE: x and y will always be even.
    '''
    half_ones:int = ones // 2
    half_twos:int = twos // 2
    first_half = ["1"] * half_ones + ["2"] * half_twos

    return int("".join(first_half + first_half[::-1]))
    

def main() -> None:
    for _ in range(int(input())):
        x, y = map(int, input().split())

        solution = solve(x, y)
        print(solution)

if __name__ == "__main__":
    main()
