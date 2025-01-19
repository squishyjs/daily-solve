# cook your dish here

def solve(length: int, days: list[int]) -> int: # solve the code
    
    count: int = 0
    max_count: int = 0
    for sale in days:

        current_sale: int = sale
        double_sale: int = current_sale * 2

        if (double_sale + count) > max_count:
            max_count = double_sale + count # update maximum

        count += sale # record the current sale

    return max_count # return the max count if found in the days

def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        n = int(input())
        number_of_days = list(map(int, input().split()))
        solution = solve(n, number_of_days)
        
        print(solution)

if __name__ == "__main__":
    main()
