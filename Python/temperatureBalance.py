# cook your dish here

def solve(n: int, chambers: list[int]) -> int:
    
    seconds: int = 0
    while (sum(chambers) != 0):
        for i in range(n - 1):
            curr_chamber: int = chambers[i]
            next_chamber: int = chambers[i + 1]

            if curr_chamber < next_chamber:
                curr_chamber -= 1
                next_chamber += 1
                seconds = seconds + 1 # increment second counter
            
            if curr_chamber == next_chamber:
                continue

    return seconds

def solve_temperature(n: int, chambers: list[int]) -> int:
    
    offset, total = 0, 0
    for temperature in chambers:
        offset += temperature
        total = total + abs(offset)

    return total


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):

        n = int(input())
        chamber_list = list(map(int, input().split()))
        solution = solve_temperature(n, chamber_list)
        print(solution)

if __name__ == "__main__":
    main()
