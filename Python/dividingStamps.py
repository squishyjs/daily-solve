
def solution(people: int, stamps: list[int]) -> bool:
    number_of_members: int = people
    total_stamps: int = sum(stamps)

    i = 1
    stamps: int = 0
    while i <= number_of_members:
        stamps += i
        i += 1
    if total_stamps % stamps == 0:
        return "YES"
    return "NO"

if __name__ == "__main__":
    cases = int(input("Enter number of cases: "))
    for _ in range(cases):
        members = int(input())
        stamps = [int(i) for i in input("Enter members: ").split()]
    
        result = solution(members, stamps)
        print(result)