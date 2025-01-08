import math

# cook your dish here
def at_risk(person: int) -> bool:
    return person >= 80 or person <= 9

def solve(n: int, days: int, people: list[int]) -> int:
    
    if days == 1:
        return len(people) # no need to group patients

    severe: int = 0
    not_severe: int = 0

    for i in range(n):
        patient = people[i]
        if at_risk(patient):
            severe += 1
            continue
        not_severe += 1
    
    return math.ceil(severe / days) + math.ceil(not_severe / days)

def main() -> None:
    test_cases = int(input())
    for _ in range(test_cases):

        n, d = map(int, input().split())
        people = [int(i) for i in input().split()]

        solution = solve(n, d, people)
        print(solution)

if __name__ == "__main__":
    main()
