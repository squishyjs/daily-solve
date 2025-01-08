# cook your dish here
# from Python.chefLandLibrary import test_cases

def solution(n: int) -> str:
    compartments = {1: "4LB", 2: "5MB", 3: "6UB", 4: "1LB", 5: "2MB", 6: "3UB", 7: "8SU", 8: "7SL"}

    return compartments[n]


def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):
        
        n = int(input()) 

        solve = solution(n)
        print(solve)

if __name__ == "__main__":
    main()
